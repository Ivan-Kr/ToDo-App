#include "ToDoList.h"

const unsigned int size_tab = 6;

void ToDoList::DoingTask(std::wstring what)
{
    std::list<std::wstring>::iterator Search = this->ToDo.begin();
    while (Search != this->ToDo.end() && what != *Search) {
        Search++;
    }
    if (Search != this->ToDo.end()) {
        this->Doing.push_back(*Search);
        this->ToDo.erase(Search);
    }
    else
        std::wcout << "\tError: Element wasn't found\n";
}

void ToDoList::DoneTask(std::wstring what)
{
    std::list<std::wstring>::iterator Search = Doing.begin();
    while (Search != Doing.end() && what != *Search) {
        Search++;
    }
    if (Search != Doing.end()) {
        Done.push_back(*Search);
        Doing.erase(Search);
    }
    else
        std::wcout << "\tError: Element wasn't found\n";
}

void ToDoList::DeleteTask(std::wstring what)
{
    std::list<std::wstring>::iterator Search3 = Done.begin();
    std::list<std::wstring>::iterator Search2 = Doing.begin();
    std::list<std::wstring>::iterator Search1 = ToDo.begin();
    bool Searched = 0;
    int numL = 0;
    while (
        (Search1 != ToDo.end() || 
        Search2 != Doing.end() ||
        Search3 != Done.end()) &&
        !Searched
        ) 
    {
        if (*Search1 == what) {
            numL = 1;
            Searched = 1;
        }
        if (*Search2 == what) {
            numL = 2;
            Searched = 1;
        }
        if (*Search3 == what) {
            numL = 3;
            Searched = 1;
        }

        if (Search1 != ToDo.end()&&!Searched)Search1++;
        if (Search2 != Doing.end() && !Searched)Search2++;
        if (Search3 != Done.end() && !Searched)Search3++;


    }
    switch (numL) {
    case 1:
        ToDo.erase(Search1);
        break;
    case 2:
        Doing.erase(Search2);
        break;
    case 3:
        Done.erase(Search3);
        break;
    default:
        std::wcout << "\tError: Element wasn't delete\n";
        break;
    }
}

void ToDoList::ShowVerticalList()
{
    std::list<std::wstring>::iterator List1 = this->ToDo.begin();
    std::list<std::wstring>::iterator List2 = this->Doing.begin();
    std::list<std::wstring>::iterator List3 = this->Done.begin();

    int mxstr = MaxString();
    /////////////////////////////////////////////

    std::wcout << "<" << name << ">\nToDo";
    std::wcout << '\t';
    std::wcout << "Doing";
    std::wcout << '\t';
    std::wcout<<"Done\n";

    /////////////////////////////////////////////

    while (List1 != this->ToDo.end() || List2 != this->Doing.end() || List3 != this->Done.end()) {

        if (List1 != this->ToDo.end()) {
            std::wcout << *List1;
            List1++;
        }
        else std::wcout << '_';
        std::wcout << '\t';

        /////////////////////////////////////////////

        if (List2 != this->Doing.end()) {
            std::wcout << *List2;
            List2++;
        }
        else std::wcout << '_';
        std::wcout << '\t';

        /////////////////////////////////////////////

        if (List3 != this->Done.end()) {
            std::wcout << *List3;
            List3++;

        }
        else std::wcout << '_';
        std::wcout << "\n";
    }

    /////////////////////////////////////////////
    std::wcout << "<" << name << ">\n\n";
    
}

void ToDoList::ShowHorizontalList()
{
    std::list<std::wstring>::iterator iter;
    iter = ToDo.begin();
    int i = 0;
    std::wcout << "<" << name << ">";
    std::wcout << "\nToDo: ";
    while (i<ToDo.size()) {
        if (iter != ToDo.end()) {
            std::wcout << *iter << ",\t";
            iter++;
            i++;
        }
        else break;
    }
    iter = Doing.begin();
    i = 0;
    std::wcout << "\nDoing: ";
    while ( i < Doing.size()) {
        if (iter != Doing.end()) {
            std::wcout << *iter << ",\t";
            iter++;
            i++;
        }
        else break;
    }
    iter = Done.begin();
    i = 0;
    std::wcout << "\nDone: ";
    while (i < Done.size()) {
        if (iter != Done.end()) {
            std::wcout << *iter << ",\t";
            iter++;
            i++;
        }
        else break;
    }
    std::wcout << "\n<" << name << ">\n";
}

void ToDoList::SaveList(std::wstring dir)
{
    std::wofstream ofile;

    ofile.open(dir);

    ofile << name;
    ofile << "\n<\n";
    auto iter = ToDo.begin();
    while (iter != ToDo.end()) {
        ofile << *iter << '\n';
        iter++;
    }
    ofile << "<\n";
    iter = Doing.begin();
    while (iter != Doing.end()) {
        ofile << *iter << '\n';
        iter++;
    }
    ofile << "<\n";
    iter = Done.begin();
    while (iter != Done.end()) {
        ofile << *iter << '\n';
        iter++;
    }
    ofile << "<\n";
    ofile.close();
}

void ToDoList::LoadList(std::wstring dir)
{
    std::wifstream ifile;
    ifile.open(dir);

    if (ifile.is_open()) {
        
        //������ �� ������ ���������� ��'� 
        //��� ����� ��� �� �������� ���'���
        //� �� ��������� �������, �� ������ ����� ������ ����������
        //��� ����� ��� ����� ���������� ���� ��� ��������� ����������
        
        ToDo.clear();
        Doing.clear();
        Done.clear();

        std::getline(ifile, name);

        std::wstring string;

        int mitka = 0;
        while (mitka < 4) {
            std::getline(ifile, string);
            if (string == L"<") mitka++;
            else {
                switch (mitka) {
                case 1:
                    ToDo.push_back(string);
                    break;
                case 2:
                    Doing.push_back(string);
                    break;
                case 3:
                    Done.push_back(string);
                    break;
                }
            }
        }
        std::wcout << ">Load files was sucessful<\n";
    }
    else std::wcout << "\tError: Application couldn't open file\n";
}

int ToDoList::MaxString()
{
    std::list<std::wstring>::iterator list;
    list = this->ToDo.begin();
    int mx=-1;
    while (list != this->ToDo.end()) {
        mx = max(mx, list->size());
        list++;
    }
    list = this->Doing.begin();
    while (list != this->Doing.end()) {
        mx = max(mx, list->size());
        list++;
    }
    list = this->Done.begin();
    while (list != this->Done.end()) {
        mx = max(mx, list->size());
        list++;
    }

    return mx;
}

void ToDoList::CreateNewList()
{
    ToDo.clear();
    Doing.clear();
    Done.clear();
    name = L"new-ToDoList";
}
