// (C) Ivan-Kr github: https://github.com/Ivan-Kr
#include "ToDoList.h"
#include "LanguangeMacross.h"
#include <iostream>
#include <fstream>
#include <list>

// я буду скоріше творити мультитаблицю.
// це буде функція!!!!!!!!!
// можна переключатися між таблицями скільки хочеш, а так, як ненадійні типи данних немає, то
// автоматично виріжеться.

float ver = 2.4f;

int main(int args,char*argv[])
{
    setlocale(0, locale.c_str());

    SetEnglish();

    bool settings_is_horiz = 0;
    bool settings_descr = 0;

    std::wstring command_stroke;
    std::list<ToDoList>panel;
    ToDoList s(L"ToDoList");
    std::wcout << L"Kiwii ToDo, for Help type \"help\", for Tutorial type \"tutorial\"\n";
    while (true) {
        std::wcout << "#:";
        std::wcin >> command_stroke;

        if (command_stroke == L"add") {
            if (settings_descr) std::wcout << "Descr: " << DescrAdd << '\n';
            std::wcin >> command_stroke;
            s.AddTask(command_stroke);
        }
        else if (command_stroke == L"doing") {
            if (settings_descr) std::wcout << "Descr: " << DescrDoing << '\n';
            std::wcin >> command_stroke;
            s.DoingTask(command_stroke);

        }
        else if (command_stroke == L"done") {
            std::wcin >> command_stroke;
            s.DoneTask(command_stroke);
            if (settings_descr) std::wcout << "Descr: " << DescrDone << '\n';
        }
        else if (command_stroke == L"help") {
            if (settings_descr) std::wcout << "Descr: " << DescrHelp << '\n';
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
        else if (command_stroke == L"show") {
            if (settings_descr) std::wcout <<"Descr: " << DescrShow << '\n';
            settings_is_horiz ? s.ShowHorizontalList() : s.ShowVerticalList();
        }
        else if (command_stroke == L"delete") {
            if (settings_descr) std::wcout << "Descr: " << DescrDelete << '\n';
        std::wcin >> command_stroke;
        s.DeleteTask(command_stroke);
        }
        else if (command_stroke == L"exit") {
            if (settings_descr) std::wcout << "Descr: " << DescrExit << '\n';
            std::wcout << StrWarning;
            std::wcin >> command_stroke;
            if(command_stroke==L"yes")
                break;
            
        }
        else if (command_stroke == L"info") {
            if (settings_descr) std::wcout << "Descr: " << DescrInfo<<'\n';
            std::wcout 
                << StrInfoAuthor<<": Ivan-Kr\n"
                << StrInfoAppVersion << ": v"<<ver<<"\n"
                << StrInfoLaunchPosition << ": " << argv[0] << "\n"
                ;
        }
        else if (command_stroke == L"clear") {
            system("cls");
            if(settings_descr) std::wcout << "Descr: " << DescrClear;
        }
        else if (command_stroke == L"settings") {
            std::wcout 
                << "\nsetting: show_description - "<<SettingsShowDescription
                << "\nsetting: set_languange - " << SettingsSetLanguange
                << "\nsetting: set_vertical_list - " << SettingsSetIsVertical
                <<"\nsetting #";
            std::wcin >> command_stroke;
            if (command_stroke == L"show_description") {
                settings_descr = !settings_descr;
                std::wcout << SettingsShowDescriptionChange;
            }
            else if (command_stroke == L"set_languange") {
                std::wcout << "Languange:\n'eng' - English\n'rus' - Russian\n'ukr' - Ukranian\n>";
                std::wcin >> command_stroke;
                if (command_stroke == L"eng") { 
                    SetEnglish(); 
                    std::wcout << SettingsSetLanguangeChange;
                }
                else if (command_stroke == L"rus") {
                    SetRussia();
                    std::wcout << SettingsSetLanguangeChange;
                }
                else if (command_stroke == L"ukr") { 
                    SetUkraine();
                    std::wcout << SettingsSetLanguangeChange;
                }
                else std::wcout << SettingsNothingChange;

            }
            else if (command_stroke == L"set_vertical_list") {
                settings_is_horiz = !settings_is_horiz;
                std::wcout << SettingsSetIsVerticalChange;
            }
            else std::wcout << SettingsNothingChange;
        }
        else if (command_stroke == L"save") {
            if (settings_descr) std::wcout << "Descr: " << DescrSave << '\n';
            _wsystem(L"dir");
            std::wcout << StrQuestFile;
            std::wcin >> command_stroke;
            s.SaveList(command_stroke);
            std::wcout << ">File was saved<\n";
        }
        else if (command_stroke == L"rename") {
            if (settings_descr) std::wcout << "Descr: " << DescrRename << '\n';
            std::wcin >> command_stroke;
            s.Rename(command_stroke);
        }
        else if (command_stroke == L"load") {
            if (settings_descr) std::wcout << "Descr: " << DescrLoad << '\n';
            std::wcout << StrWarning;
            std::wcin >> command_stroke;
            if (command_stroke == L"yes") {
                _wsystem(L"dir");
                std::wcout << StrQuestFile;
                std::wcin >> command_stroke;
                s.LoadList(command_stroke);
            }
        }
        else if (command_stroke == L"create") {
            if (settings_descr) std::wcout << "Descr: " << DescrCreate << '\n';
            std::wcout << StrWarning;
            std::wcin >> command_stroke;
            if (command_stroke == L"yes") {
                s.CreateNewList();
            }
        }
        else if (command_stroke == L"tutorial") {
        std::wcout << "Tutorial: \n"<<Tutorial;
        _wsystem(L"pause");
        }
        /*else if (command_stroke == L"panel") {
            std::wcout << "Panel: " << L"Kiwii Panel, for Help type \"help\"\n";
            while (true) {
                std::wcout << "#.Panel:";
                std::wcin >> command_stroke;
                if (command_stroke == L"back") { break; }
                else if (command_stroke == L"help") { 
                    std::wcout
                        << L"\tback - " << HelpTutorial << "\n"
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
                else if (command_stroke == L"add") {
                    for (auto i = panel.begin();i != panel.end();i++) {
                        std::wcout<<i->
                    }
                }
                else std::wcout << "\tError.Panel: unknown command\n";
            }
            std::wcout << L"Kiwii ToDo, for Help type \"help\", for Tutorial type \"tutorial\"\n";
        } */
        else {
            if (settings_descr) std::wcout << "Descr: " << DescrInvalid << '\n';
            std::wcout << "\tError: unknown command\n";
        }
    }

    return 0;
}
