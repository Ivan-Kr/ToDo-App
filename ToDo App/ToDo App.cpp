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

        std::wcout << "<"<<name<<">\nToDo\tDoing\tDone\n";

        while (List1 != this->ToDo.end() || List2 != this->Doing.end() || List3 != this->Done.end()) {
            if (List1 != this->ToDo.end()) {
                std::wcout << *List1;
                List1++;
            }
            else
                std::wcout << '<';
            std::wcout << '\t';
            if (List2 != this->Doing.end()) {
                std::wcout << *List2;
                List2++;
            }
            else
                std::wcout << '<';
            std::wcout << '\t';
            if (List3 != this->Done.end()) {
                std::wcout << *List3;
                List3++;
            }
            else
                std::wcout << '<';
            std::wcout << "\n";
        }

        std::wcout << "<" << name << ">\n\n";
    }

    void SaveList(std::wstring link) {
        std::wofstream file;
        file.open(link);
        file << "<Start>\n";
        file << this->name<<L'\n';
        file << this->ToDo.size() << L'\n';
        file << this->Doing.size() << L'\n';
        file << this->Done.size() << L'\n';
        file << "<ToDo>\n";
        
        std::list<std::wstring>::iterator List = this->ToDo.begin();
        while (List != ToDo.end()) {
            file << *List<<'\n';
            List++;
        }
        file << "<Doing>\n";
        List = this->Doing.begin();
        while (List != Doing.end()) {
            file << *List << '\n';
            List++;
        }
        file << "<Done>\n";
        List = this->Done.begin();
        while (List != Done.end()) {
            file << *List << '\n';
            List++;
        }
        file << "<End>\n";
        file.close();
        std::wcout << "\n>Saving has sucesful<\n";
    }
};


int main()
{
    ToDoList a(L"Maps");
    a.AddTask(L"Hello");
    a.AddTask(L"Hi");
    a.AddTask(L"What's up");
    a.ShowList();
    a.DoingTask(L"Hello");
    a.ShowList();
    a.DoneTask(L"Hello");
    a.ShowList();
    a.SaveList(L"D:\\link.txt");
    return 0;
}
