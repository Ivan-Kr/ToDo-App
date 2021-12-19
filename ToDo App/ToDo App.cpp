// (C) Ivan-Kr github: https://github.com/Ivan-Kr
#include "ToDoList.h"
#include "LanguangeMacross.h"
#include <iostream>
#include <fstream>
#include <list>
#include <vector>

float ver = 2.4f;

__int64 min3(__int64 a, __int64 b, __int64 c) {
    if (a < b && a < c) return a;
    else if (b < c && b < a) return b;
    else return c;
}

unsigned __int32 num_wleven(std::wstring first, std::wstring second) {

    std::vector<std::vector<unsigned __int32>> arr;
    int X = first.length() + 1;
    int Y = second.length() + 1;
    arr.reserve(X);
    arr.resize(X);
    for (short i = 0;i < X;i++) {
        arr[i].reserve(Y);
        arr[i].resize(Y);
    }

    for (int j = 0;j < Y;j++) {
        for (int i = 0;i < X;i++) {
            if (j == 0) {
                arr[i][j] = i;
            }
            else if (i == 0) {
                arr[i][j] = j;
            }
            else {
                int min0 = arr[i - 1][j];
                int min2 = arr[i][j - 1];
                int min1 = arr[i - 1][j - 1];

                arr[i][j] = min3(min0, min1, min2);

                if (first[i - 1] != second[j - 1])
                    arr[i][j]++;
            }


        }
    }

    return arr[X - 1][Y - 1];
}

int main(int args,char*argv[])
{
    setlocale(0, locale.c_str());

    SetEnglish();

    bool settings_is_horiz = 0;

    std::wstring command_stroke;
    std::vector<ToDoList>panel;
    {
        ToDoList s(L"ToDoList");
        panel.push_back(s);
    }

    int num = 0;

    std::wcout << L"Kiwii ToDo, for Help type \"help\", for Tutorial type \"tutorial\"\n";
    while (true) {
        std::wcout << "#:";
        std::wcin >> command_stroke;

        if (command_stroke == L"add") {
            
            std::wcin >> command_stroke;
            panel[num].AddTask(command_stroke);
        }
        else if (command_stroke == L"doing") {
           
            std::wcin >> command_stroke; 
            panel[num].DoingTask(command_stroke);

        }
        else if (command_stroke == L"done") {
            std::wcin >> command_stroke;
            panel[num].DoneTask(command_stroke);
            
        }
        else if (command_stroke == L"help") {
            
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
                << L"\tpanel - " << HelpPanel << "\n"
                ;

        }
        else if (command_stroke == L"show") {
           
            settings_is_horiz ? panel[num].ShowHorizontalList() : panel[num].ShowVerticalList();
        }
        else if (command_stroke == L"delete") {

        std::wcin >> command_stroke;
        panel[num].DeleteTask(command_stroke);
        }
        else if (command_stroke == L"exit") {
            
            std::wcout << StrWarning;
            std::wcin >> command_stroke;
            if(command_stroke==L"yes")
                break;
            
        }
        else if (command_stroke == L"info") {
            
            std::wcout 
                << StrInfoAuthor<<": Ivan-Kr\n"
                << StrInfoAppVersion << ": v"<<ver<<"\n"
                << StrInfoLaunchPosition << ": " << argv[0] << "\n"
                ;
        }
        else if (command_stroke == L"clear") {
            system("cls");
            
        }
        else if (command_stroke == L"settings") {
            std::wcout 
                << "\nsetting: set_languange - " << SettingsSetLanguange
                << "\nsetting: set_vertical_list - " << SettingsSetIsVertical
                <<"\nsetting #";
            std::wcin >> command_stroke;if (command_stroke == L"set_languange") {
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
           
            _wsystem(L"dir");
            std::wcout << StrQuestFile;
            std::wcin >> command_stroke;
            panel[num].SaveList(command_stroke);
            std::wcout << ">File was saved<\n";
        }
        else if (command_stroke == L"rename") {
            
            std::wcin >> command_stroke;
            panel[num].Rename(command_stroke);
        }
        else if (command_stroke == L"load") {
            
            std::wcout << StrWarning;
            std::wcin >> command_stroke;
            if (command_stroke == L"yes") {
                _wsystem(L"dir");
                std::wcout << StrQuestFile;
                std::wcin >> command_stroke;
                panel[num].LoadList(command_stroke);
            }
        }
        else if (command_stroke == L"create") {
            
            std::wcout << StrWarning;
            std::wcin >> command_stroke;
            if (command_stroke == L"yes") {
                panel[num].CreateNewList();
            }
        }
        else if (command_stroke == L"tutorial") {
        std::wcout << "Tutorial: \n"<<Tutorial;
        _wsystem(L"pause");
        }
        else if (command_stroke == L"panel") {
            std::wcout << "Panel: " << L"Kiwii Panel, for Help type \"help\"\n";
            while (true) {
                std::wcout << "#.Panel:";
                std::wcin >> command_stroke;
                if (command_stroke == L"back") { break; }
                else if (command_stroke == L"help") { 
                    std::wcout
                        << L"\tback - " << HelpBack << "\n"
                        << L"\tselect - " << HelpSelect << "\n"
                        << L"\tcreate - " << HelpCreate << "\n"
                        << L"\tdelete - " << HelpDelete << "\n"
                        << L"\thelp - " << HelpHelp << "\n"
                        << L"\tshow - " << HelpShow << "\n"
                        ;
                }
                else if (command_stroke == L"show") {
                    for (auto i = 0;i < panel.size();i++)
                        std::wcout << panel[i].Name()<<'\n';
                }
                else if(command_stroke==L"create"){
                    panel.push_back(panel[0]);
                    panel[panel.size() - 1].CreateNewList();
                }
                else if (command_stroke == L"select") {
                    for (auto i = 0;i < panel.size();i++)
                        std::wcout <<i<<": " << panel[i].Name() << '\n';

                    std::wcin >> command_stroke;
                   
                    int ind = _wtoi(command_stroke.c_str());

                    if (ind >= 0 && ind < panel.size())
                        num = ind;
                }
                else if (command_stroke == L"delete") {
                    for (auto i = 0;i < panel.size();i++)
                        std::wcout << i << ": " << panel[i].Name() << '\n';

                    std::wcin >> command_stroke;

                    int ind = _wtoi(command_stroke.c_str());

                    int i = 0;
                    auto iter = panel.begin();
                    while (iter != panel.end() && ind < i-1) {
                        iter++;
                        i++;
                    }

                    if (ind >= 0 && ind < panel.size())
                        panel.erase(iter);
                }
                else std::wcout << "\tError.Panel: unknown command\n";
            }
            std::wcout << L"Kiwii ToDo, for Help type \"help\", for Tutorial type \"tutorial\"\n";
        } 
        else {
           
            std::wcout << "\tError: unknown command\n";
        }
    }

    return 0;
}
