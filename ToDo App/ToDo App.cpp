#include <iostream>
#include <list>
#include <string>

class ToDoList {
    std::list<std::wstring> ToDo;
    std::list<std::wstring> Doing;
    std::list<std::wstring> Done;
public:
    void AddTask(std::wstring todo) {
        ToDo.push_back(todo);
    }

    void DoingTask(std::wstring what) {
        std::list<std::wstring>::iterator Search = ToDo.begin();
        while (Search != ToDo.end()&&what!=*Search) {
            Search++;
        }
        if (Search != ToDo.end()) {
            Doing.push_back(*Search);
            ToDo.erase(Search);
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
        std::list<std::wstring>::iterator List1 = ToDo.begin();
        std::list<std::wstring>::iterator List2 = Doing.begin();
        std::list<std::wstring>::iterator List3 = Done.begin();

        std::wcout << "<List\nToDo\tDoing\tDone\n";

        while (List1 != ToDo.end() || List2 != Doing.end() || List3 != Done.end()) {
            if (List1 != ToDo.end()) {
                std::wcout << *List1;
                List1++;
            }
            else
                std::wcout << '<';
            std::wcout << '\t';
            if (List2 != Doing.end()) {
                std::wcout << *List2;
                List2++;
            }
            else
                std::wcout << '<';
            std::wcout << '\t';
            if (List3 != Done.end()) {
                std::wcout << *List3;
                List3++;
            }
            else
                std::wcout << '<';
            std::wcout << "\n";
        }

        std::wcout << "list>\n\n";
    }
};


int main()
{
    ToDoList a;
    a.AddTask(L"Hello");
    a.AddTask(L"Hi");
    a.AddTask(L"What's up");
    a.ShowList();
    a.DoingTask(L"Hello");
    a.ShowList();
    a.DoneTask(L"Hello");
    a.ShowList();
    return 0;
}
