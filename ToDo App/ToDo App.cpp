// (C) Ivan-Kr github: https://github.com/Ivan-Kr
#include "ToDoList.h"
#include "LanguangeMacross.h"
#include <iostream>
#include <fstream>
#include <list>

float ver = 2.3f;

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
            if (descr) std::wcout << "Descr: " << DescrAdd << '\n';
            std::wcin >> str;
            s.AddTask(str);
        }
        else if (str == L"doing") {
            if (descr) std::wcout << "Descr: " << DescrDoing << '\n';
            std::wcin >> str;
            s.DoingTask(str);

        }
        else if (str == L"done") {
            std::wcin >> str;
            s.DoneTask(str);
            if (descr) std::wcout << "Descr: " << DescrDone << '\n';
        }
        else if (str == L"help") {
            if (descr) std::wcout << "Descr: " << DescrHelp << '\n';
            std::wcout 
                << L"\ttutorial - "<<HelpTutorial << "\n"
                << L"\tadd - "<<HelpAdd << "\n"
                << L"\tcreate - " << HelpCreate << "\n"
                << L"\tclear - " << HelpClear << "\n"
                << L"\tdoing - " << HelpDoing << "\n"
                << L"\tdone - " << HelpDone << "\n"
                << L"\tdelete - " << HelpDelete << "\n"
                << L"\texit - " << HelpExit << "\n"
                << L"\thelp - " << HelpHelp << "\n"
                << L"\tinfo - " << HelpInfo << "\n"
                << L"\tload - " << HelpLoad << "\n"
                << L"\tshow - " << HelpShow << "\n"
                << L"\tsave - " << HelpSave << "\n"
                << L"\trename - " << HelpRename << "\n"
                << L"\tsettings - " << HelpSettings << "\n"
                ;

        }
        else if (str == L"show") {
            if (descr) std::wcout <<"Descr: " << DescrShow << '\n';
            s.ShowVerticalList();

        }
        else if (str == L"delete") {
            if (descr) std::wcout << "Descr: " << DescrDelete << '\n';
        std::wcin >> str;
        s.DeleteTask(str);
        }
        else if (str == L"exit") {
            if (descr) std::wcout << "Descr: " << DescrExit << '\n';
            std::wcout << StrWarning;
            std::wcin >> str;
            if(str==L"yes")
                break;
            
        }
        else if (str == L"info") {
            if (descr) std::wcout << "Descr: " << DescrInfo<<'\n';
            std::wcout 
                << StrInfoAuthor<<": Ivan-Kr\n"
                << StrInfoAppVersion << ": v"<<ver<<"\n"
                << StrInfoLaunchPosition << ": " << argv[0] << "\n"
                ;
        }
        else if (str == L"clear") {
            system("cls");
            if(descr) std::wcout << "Descr: " << DescrClear;
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
            if (descr) std::wcout << "Descr: " << DescrSave << '\n';
            _wsystem(L"dir");
            std::wcout << StrQuestFile;
            std::wcin >> str;
            s.SaveList(str);
            std::wcout << ">File was saved<\n";
        }
        else if (str == L"rename") {
            if (descr) std::wcout << "Descr: " << DescrRename << '\n';
            std::wcin >> str;
            s.Rename(str);
        }
        else if (str == L"load") {
            if (descr) std::wcout << "Descr: " << DescrLoad << '\n';
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
            if (descr) std::wcout << "Descr: " << DescrCreate << '\n';
            std::wcout << StrWarning;
            std::wcin >> str;
            if (str == L"yes") {
                s.CreateNewList();
            }
        }
        else if (str == L"tutorial") {
        std::wcout << "Tutorial: \n"<<Tutorial;
        _wsystem(L"pause");
        }
        
        else {
            if (descr) std::wcout << "Descr: " << DescrInvalid << '\n';
            std::wcout << "\tError: unknown command\n";
        }
    }

    return 0;
}
