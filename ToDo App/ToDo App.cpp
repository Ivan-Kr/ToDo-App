// (C) Ivan-Kr github: https://github.com/Ivan-Kr
#include <iostream>
#include <fstream>
#include <list>
#include <string>

float ver = 1.05;

class ToDoList {

    std::wstring name;

    std::list<std::wstring> ToDo;
    std::list<std::wstring> Doing;
    std::list<std::wstring> Done;
public:
    ToDoList(std::wstring name) {
        this->name = name;
    }

    void AddTask(std::wstring todo) {
        this->ToDo.push_back(todo);
    }

    void DoingTask(std::wstring what) {
        std::list<std::wstring>::iterator Search = this->ToDo.begin();
        while (Search != this->ToDo.end()&&what!=*Search) {
            Search++;
        }
        if (Search != this->ToDo.end()) {
            this->Doing.push_back(*Search);
            this->ToDo.erase(Search);
        }
        else
            std::wcout << "\nInvalid: Element wasn't found\n";
    }

    void DoneTask(std::wstring what) {
        std::list<std::wstring>::iterator Search = Doing.begin();
        while (Search != Doing.end() && what != *Search) {
            Search++;
        }
        if (Search != Doing.end()) {
            Done.push_back(*Search);
            Doing.erase(Search);
        }
        else
            std::wcout << "\nInvalid: Element wasn't found\n";
    }

    void DeleteTask(std::wstring what) {
        std::list<std::wstring>::iterator Search = Done.begin();
        while (Search != Done.end() && what != *Search) {
            Search++;
        }
        if (Search != Done.end()) {
            Done.erase(Search);
        }
        else
            std::wcout << "\nInvalid: Element wasn't found\n";
    }

    void ShowList() {
        std::list<std::wstring>::iterator List1 = this->ToDo.begin();
        std::list<std::wstring>::iterator List2 = this->Doing.begin();
        std::list<std::wstring>::iterator List3 = this->Done.begin();

        std::wcout << "<" << name << ">\nToDo\tDoing\tDone\n";

        while (List1 != this->ToDo.end() || List2 != this->Doing.end() || List3 != this->Done.end()) {
            if (List1 != this->ToDo.end()) {
                std::wcout << *List1;
                List1++;
            }
            else
                std::wcout << '.';
            std::wcout << '\t';
            if (List2 != this->Doing.end()) {
                std::wcout << *List2;
                List2++;
            }
            else
                std::wcout << '.';
            std::wcout << '\t';
            if (List3 != this->Done.end()) {
                std::wcout << *List3;
                List3++;
            }
            else
                std::wcout << '.';
            std::wcout << "\n";
        }

        std::wcout << "<" << name << ">\n\n";
    }
};

int main(int args,char*argv[])
{
    setlocale(0, "ukr");

    bool descr = 0;

    std::wstring str;
    ToDoList s(L"ToDoList");
    std::wcout << "Kiwii ToDo, for Help type \"help\"\n";
    while (true) {
        std::wcout << "#:";
        std::wcin >> str;

        if (str == L"add") {
            if (descr) std::wcout << "Descr: Creating is clearer\n";
            std::wcin >> str;
            s.AddTask(str);

        }
        else if (str == L"doing") {
            if (descr) std::wcout << "Descr: Retargeting is clearer\n";
            std::wcin >> str;
            s.DoingTask(str);

        }
        else if (str == L"done") {
            std::wcin >> str;
            s.DoneTask(str);
            if (descr) std::wcout << "Descr: Retargeting is clearer\n";
        }
        else if (str == L"help") {
            if (descr) std::wcout << "Descr: Help is helping you\n";
            std::wcout << L"\tadd - Add new task\n"
                << L"\tdoing - move current tast to list (Doing)\n"
                << L"\tdone - move current task to list (Done)\n"
                << L"\tdelete - delete task from list (Done)\n"
                << L"\texit - exit from application\n"
                << L"\thelp - help you for comfortable using\n"
                << L"\tinfo - information about app"
                << L"\tshow - show lists\n"
                << L"\tclear - clear console\n"
                << L"\tsettings - set settings\n"
                ;

        }
        else if (str == L"show") {
            if (descr) std::wcout << "Descr: Show is useful, just watch\n";
            s.ShowList();

        }
        else if (str == L"delete") {
            if (descr) std::wcout << "Descr: Deleting is useful for cleaning interface\n";
        std::wcin >> str;
        s.DeleteTask(str);
        }
        else if (str == L"exit") {
            if (descr) std::wcout << "Descr: Exit it's useful for retarget to terminal\n";
            std::wcout << "Are you sure about that? (yes/no) : ";
            std::wcin >> str;
            if(str==L"yes")
                break;
            
        }
        else if (str == L"info") {
            if (descr) std::wcout << "Descr: Description is useful for beginners\n";
            std::wcout 
                << "Author: Ivan-Kr\n"
                << "Application version: v"<<ver<<"\n"
                << "Launch position: " << argv[0] << "\n"
                ;
            
        }
        else if (str == L"clear") {
            system("cls");
            if(descr) std::wcout << "Descr: Clean for hiding your plans\n";
        }
        else if (str == L"settings") {
            std::wcout << "setting: show_descr\nsetting #";
            std::wcin >> str;
            if (str == L"show_descr") {
                descr = !descr;
                std::wcout << "Setting \"Show Descreiption\" is changed\n";
            }
            else std::wcout << "Settings isn't changed\n";
        }
        else {
            if (descr) std::wcout << "it's not corrrect ccmmand\n";
            std::wcout << "\nInvalid: unknown command\n";
        }
    }

    return 0;
}
