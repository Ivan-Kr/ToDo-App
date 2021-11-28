// (C) Ivan-Kr github: https://github.com/Ivan-Kr
#include "ToDoList.h"
#include <iostream>
#include <fstream>
#include <list>
#include <string>

float ver = 1.5f;

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
            std::wcout 
                << L"\ttutorial - set settings\n"
                << L"\tadd - Add new task\n"
                << L"\tcreate - creating new empty todo list\n"
                << L"\tclear - clear console\n"
                << L"\tdoing - move current tast to list (Doing)\n"
                << L"\tdone - move current task to list (Done)\n"
                << L"\tdelete - delete task from lists (Useful if tasks isn't same)\n"
                << L"\texit - exit from application\n"
                << L"\thelp - help you for comfortable using\n"
                << L"\tinfo - information about app\n"
                << L"\tload - loading todo list\n"
                << L"\tshow - show lists\n"
                << L"\tsave - back up your list\n"
                << L"\trename - rename your todo list\n"
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
            std::wcout << "Are you sure about that? (Current To-Do List will be erased) (\"yes\"/not \"yes\") : ";
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
        else if (str == L"save") {
            if (descr) std::wcout << "Descr: Back up is very important item\n";
            _wsystem(L"dir");
            std::wcout << "Name and format file : ";
            std::wcin >> str;
            s.SaveList(str);
            std::wcout << ">File was saved<\n";
        }
        else if (str == L"rename") {
            if (descr) std::wcout << "Descr: Why not?\n";
            std::wcin >> str;
            s.Rename(str);
        }
        else if (str == L"load") {
            if (descr) std::wcout << "Descr: Loading Back up is so quickly\n";
            std::wcout << "Are you sure about that? (Current To-Do List will be erased) (\"yes\"/not \"yes\") : ";
            std::wcin >> str;
            if (str == L"yes") {
                _wsystem(L"dir");
                std::wcout << "Name and format file : ";
                std::wcin >> str;
                s.LoadList(str);
            }
        }
        else if (str == L"create") {
            if (descr) std::wcout << "Descr: Whose need start new to-do list\n";
            std::wcout << "Are you sure about that? (Current To-Do List will be erased) (\"yes\"/not \"yes\") : ";
            std::wcin >> str;
            if (str == L"yes") {
                s.CreateNewList();
            }
        }
        else if (str == L"tutorial") {
        std::wcout << "How to use :\n"
            <<"you can made own to - do tableand manipulate with that\n"
            <<"it's very flexible and it can out in multiple languange\n";
        _wsystem(L"pause");
        }
        else {
            if (descr) std::wcout << "Descr: it's not correct command\n";
            std::wcout << "\tError: unknown command\n";
        }
    }

    return 0;
}
