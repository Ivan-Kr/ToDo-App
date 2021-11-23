#include <iostream>
#include <fstream>
#include <list>
#include <string>

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


int main()
{
    setlocale(0, "ukr");
    std::wstring str;
    ToDoList s(L"ToDoList");
    std::wcout << "Kiwii ToDo, for Help type \"help\"\n";
    while (true) {
        std::wcout << "#:";
        std::wcin >> str;

        if (str == L"add") {
            std::wcin >> str;
            s.AddTask(str);
        }
        if(str==L"doing") {
            std::wcin >> str;
            s.DoingTask(str);
        }
        if (str == L"done") {
            std::wcin >> str;
            s.DoneTask(str);
        }
        if (str == L"help") {
            std::wcout << L"\tadd - Add new task\n\tdoing - move current tast to list (Doing)\n\tdone - move current task to list (Done)\n\t show - show lists\n";
        }
        if (str == L"show") {
            s.ShowList();
        }
    }

    return 0;
}
