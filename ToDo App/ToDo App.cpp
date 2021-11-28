// (C) Ivan-Kr github: https://github.com/Ivan-Kr
#include "ToDoList.h"
#include "LanguangeMacross.h"
#include <iostream>
#include <fstream>
#include <list>


float ver = 1.5f;

int main(int args,char*argv[])
{
    setlocale(0, locale.c_str());

    bool descr = 0;

    std::wstring str;
    ToDoList s(L"ToDoList");
    std::wcout << L"Kiwii ToDo, for Help type \"help\", for Tutorial type \"tutorial\"\n";
    while (true) {
        std::wcout << "#:";
        std::wcin >> str;

        if (str == L"add") {
            if (descr) std::wcout << DescrAdd;
            std::wcin >> str;
            s.AddTask(str);
        }
        else if (str == L"doing") {
            if (descr) std::wcout << DescrDoing;
            std::wcin >> str;
            s.DoingTask(str);

        }
        else if (str == L"done") {
            std::wcin >> str;
            s.DoneTask(str);
            if (descr) std::wcout << DescrDone;
        }
        else if (str == L"help") {
            if (descr) std::wcout << DescrHelp;
            std::wcout 
                << L"\ttutorial - "<<HelpTutorial
                << L"\tadd - "<<HelpAdd
                << L"\tcreate - " << HelpCreate
                << L"\tclear - " << HelpClear
                << L"\tdoing - " << HelpDoing
                << L"\tdone - " << HelpDone
                << L"\tdelete - " << HelpDelete
                << L"\texit - " << HelpExit
                << L"\thelp - " << HelpHelp
                << L"\tinfo - " << HelpInfo
                << L"\tload - " << HelpLoad
                << L"\tshow - " << HelpShow
                << L"\tsave - " << HelpSave
                << L"\trename - " << HelpRename
                << L"\tsettings - " << HelpSettings
                ;

        }
        else if (str == L"show") {
            if (descr) std::wcout << DescrShow;
            s.ShowList();

        }
        else if (str == L"delete") {
            if (descr) std::wcout << DescrDelete;
        std::wcin >> str;
        s.DeleteTask(str);
        }
        else if (str == L"exit") {
            if (descr) std::wcout << DescrExit;
            std::wcout << StrWarning;
            std::wcin >> str;
            if(str==L"yes")
                break;
            
        }
        else if (str == L"info") {
            if (descr) std::wcout << DescrInfo;
            std::wcout 
                << StrInfoAuthor<<": Ivan-Kr\n"
                << StrInfoAppVersion << ": v"<<ver<<"\n"
                << StrInfoLaunchPosition << ": " << argv[0] << "\n"
                ;
            
        }
        else if (str == L"clear") {
            system("cls");
            if(descr) std::wcout << DescrClear;
        }
        else if (str == L"settings") {
            std::wcout 
                << "\nsetting: show_description - "<<SettingsShowDescription
                << "\nsetting: set_languange - " << SettingsSetLanguange
                <<"\nsetting #";
            std::wcin >> str;
            if (str == L"show_description") {
                descr = !descr;
                std::wcout << SettingsShowDescriptionChange;
            }
            else if (str == L"set_languange") {
                std::wcout << "Languange:\n'eng' - English\n'rus' - Russian\n'ukr' - Ukranian\n>";
                std::wcin >> str;
                if (str == L"eng") { 
                    SetEnglish(); 
                    std::wcout << SettingsSetLanguangeChange;
                }
                else if (str == L"rus") {
                    SetRussia();
                    std::wcout << SettingsSetLanguangeChange;
                }
                else if (str == L"ukr") { 
                    SetUkraine();
                    std::wcout << SettingsSetLanguangeChange;
                }
                else std::wcout << SettingsNothingChange;

            }
            else std::wcout << SettingsNothingChange;
        }
        else if (str == L"save") {
            if (descr) std::wcout << DescrSave;
            _wsystem(L"dir");
            std::wcout << StrQuestFile;
            std::wcin >> str;
            s.SaveList(str);
            std::wcout << ">File was saved<\n";
        }
        else if (str == L"rename") {
            if (descr) std::wcout << DescrRename;
            std::wcin >> str;
            s.Rename(str);
        }
        else if (str == L"load") {
            if (descr) std::wcout << DescrLoad;
            std::wcout << StrWarning;
            std::wcin >> str;
            if (str == L"yes") {
                _wsystem(L"dir");
                std::wcout << StrQuestFile;
                std::wcin >> str;
                s.LoadList(str);
            }
        }
        else if (str == L"create") {
            if (descr) std::wcout << DescrCreate;
            std::wcout << StrWarning;
            std::wcin >> str;
            if (str == L"yes") {
                s.CreateNewList();
            }
        }
        else if (str == L"tutorial") {

        _wsystem(L"pause");
        }
        else {
            if (descr) std::wcout << DescrInvalid;
            std::wcout << "\tError: unknown command\n";
        }
    }

    return 0;
}
