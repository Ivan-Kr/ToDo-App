#pragma once
#include <string>

std::string locale;

std::wstring StrInfoAuthor;
std::wstring StrInfoAppVersion;
std::wstring StrInfoLaunchPosition;

std::wstring StrQuestFile;

std::wstring StrWarning;

////////////////////////////////////////////

std::wstring DescrAdd;
std::wstring DescrDoing;
std::wstring DescrDone;
std::wstring DescrHelp;
std::wstring DescrShow;
std::wstring DescrDelete;
std::wstring DescrExit;
std::wstring DescrInfo;
std::wstring DescrClear;
std::wstring DescrSave;
std::wstring DescrRename;
std::wstring DescrLoad;
std::wstring DescrCreate;
std::wstring DescrInvalid;

////////////////////////////////////////////

std::wstring HelpAdd;
std::wstring HelpDoing;
std::wstring HelpDone;
std::wstring HelpHelp;
std::wstring HelpShow;
std::wstring HelpDelete;
std::wstring HelpExit;
std::wstring HelpInfo;
std::wstring HelpClear;
std::wstring HelpSave;
std::wstring HelpRename;
std::wstring HelpLoad;
std::wstring HelpCreate;
std::wstring HelpSettings;
std::wstring HelpTutorial;
std::wstring HelpPanel;
std::wstring HelpSelect;
std::wstring HelpBack;

////////////////////////////////////////////

std::wstring SettingsNothingChange;
std::wstring SettingsShowDescription;
std::wstring SettingsShowDescriptionChange;
std::wstring SettingsSetLanguange;
std::wstring SettingsSetLanguangeChange;
std::wstring SettingsSetIsVertical;
std::wstring SettingsSetIsVerticalChange;

////////////////////////////////////////////

//std::wstring PanelHelp;

////////////////////////////////////////////

std::wstring Tutorial;

void SetEnglish() {
	locale = "eng";

	setlocale(0, locale.c_str());

	StrInfoAuthor = L"Author";
	StrInfoAppVersion = L"Program version";
	StrInfoLaunchPosition = L"Launch position";

	StrQuestFile = L"Name and format file : ";

	StrWarning = L"Are you sure about that? (Current To-Do List will be erased) (\"yes\"/not \"yes\") : ";

	////////////////////////////////////////////

	DescrAdd = L"Descr: Creating is clearer";
	DescrDoing = L"Descr: Retargeting is clearer";
	DescrDone = L"Descr: Retargeting is clearer";
	DescrHelp = L"Descr: Help is helping you";
	DescrShow = L"Descr: Show is useful, just watch";
	DescrDelete = L"Descr: Deleting is useful for cleaning interface";
	DescrExit = L"Descr: Exit it's useful for retarget to terminal";
	DescrInfo = L"Descr: Description is useful for beginners";
	DescrClear = L"Descr: Clean for hiding your plans";
	DescrSave = L"Descr: Back up is very important";
	DescrRename = L"Descr: Why not?";
	DescrLoad = L"Descr: Loading Back up is so quickly";
	DescrCreate = L"Descr: Whose need start new to-do list";
	DescrInvalid = L"Descr: it's not correct command";
	DescrClear = L"Descr: Clean for hiding your plans";

	////////////////////////////////////////////

	HelpAdd = L"Add new task";
	HelpDoing = L"move current tast to list (Doing)";
	HelpDone = L"move current task to list (Done)";
	HelpHelp = L"help you for comfortably set";
	HelpShow = L"show lists";
	HelpDelete = L"delete task from lists";
	HelpExit = L"exit from application";
	HelpInfo = L"information about app";
	HelpClear = L"clear console";
	HelpSave = L"create back up of your list";
	HelpRename = L"rename title of your todo list";
	HelpLoad = L"loading todo list into app";
	HelpCreate = L"create new empty todo list";
	HelpSettings = L"set settings";
	HelpTutorial = L"learn you, how use the application";
	HelpPanel = L"go to the panel where you can manipulate other tables";
	HelpSelect = L"select list";
	HelpBack = L"to back to selected list";

	////////////////////////////////////////////

	SettingsNothingChange = L"Settings isn't changed\n";
	SettingsShowDescription = L"show description";
	SettingsShowDescriptionChange = L"Setting \"Show Descreiption\" is changed\n";
	SettingsSetLanguange = L"change languange output";
	SettingsSetLanguangeChange = L"Setting \"Change Languange\" is changed\n";
	SettingsSetIsVertical = L"change vision on todo list";
	SettingsSetIsVerticalChange = L"Setting \"Change Vision\" is changed\n";

	////////////////////////////////////////////

	Tutorial = L"Why :\nyou can made own to-do table and manipulate with that\nit's very flexible and it can out in multiple languange (which?, type 'settings')\nHow to use :\nyou type a command and argumet, if it's had\nfrom your command, application make current action (about it type 'help')\n";

}

void SetRussia() {

	locale = "rus";

	setlocale(0, locale.c_str());

	StrInfoAuthor = L"�����";
	StrInfoAppVersion = L"������ ���������";
	StrInfoLaunchPosition = L"����� �������";

	StrQuestFile = L"��� � ������ ����� : ";

	StrWarning = L"�� ������������? (���� ��-�� ���� ����� �����) (\"yes\"/�� \"yes\") : ";

	////////////////////////////////////////////

	DescrAdd = L"Descr: �������� ��� �������";
	DescrDoing = L"Descr: ������������ ��� �������";
	DescrDone = L"Descr: ������������ ��� �������";
	DescrHelp = L"Descr: Help �������� ����";
	DescrShow = L"Descr: Show ���� ��������, ������ ��������";
	DescrDelete = L"Descr: �������� �������� ��� ������� ����������";
	DescrExit = L"Descr: Exit ��������, ����� ���������� ���� � ��������";
	DescrInfo = L"Descr: �������� �������� ��� ����������";
	DescrClear = L"Descr: Clean ��� ��������� ������";
	DescrSave = L"Descr: ������������� ��� ���� �����, �� ��������� ������";
	DescrRename = L"Descr: ������ �� � ���?";
	DescrLoad = L"Descr: �������� ��������� ����� ������� ������� ���������� �� ������";
	DescrCreate = L"Descr: ����� ��������� ������� ��-�� �����";
	DescrInvalid = L"Descr: ��� ����������� �������";

	////////////////////////////////////////////

	HelpAdd = L"��������� ����� �������";
	HelpDoing = L"������� ��� ������� �� ����� (���������)";
	HelpDone = L"������� ��� ������� �� ����� (�������)";
	HelpHelp = L"�������� ���� ��������� �����������";
	HelpShow = L"���������� ��-�� ����";
	HelpDelete = L"������� ������� �� �����";
	HelpExit = L"����� �� ��������";
	HelpInfo = L"���������� � ��������";
	HelpClear = L"������� �������";
	HelpSave = L"����������� ���� ����";
	HelpRename = L"������������� �������� ��-�� �����";
	HelpLoad = L"��������� ��-�� ����";
	HelpCreate = L"������ ����� ������ ��-�� ����";
	HelpSettings = L"��������� ���������";
	HelpTutorial = L"����� ����, ��� ������������ ���������";
	HelpPanel = L"���������� � ������ � ������� �� ������������� � ������ ���������";
	HelpSelect = L"�������� ����";
	HelpBack = L"���������� � �������� ����";

	////////////////////////////////////////////

	SettingsNothingChange = L"��������� �� ��i������\n";
	SettingsShowDescription = L"�������� ��������";
	SettingsShowDescriptionChange = L"��������� \"�������� ��������\" ����������\n";
	SettingsSetLanguange = L"�������� ���� ������";
	SettingsSetLanguangeChange = L"��������� \"�������� ���� ������\" ����������\n";
	SettingsSetIsVertical = L"change vision on todo list";
	SettingsSetIsVerticalChange = L"Setting \"Change Vision\" is changed\n";

	////////////////////////////////////////////

	Tutorial = L"������ :\n�� ������ ������� ���� ��-�� ���� � �������������� � ����\n��� ����� ������� � ����� �������� ������ ����� (�����?, �������� 'settings')\n��� ������������ :\n�� ������ ������� � ���������, ���� ��� �����\n�� ����� ������, �������� ������ ���������� �������� (��������� ��������� 'help')\n";
}

void SetUkraine() {
	//without ukranian symbol '�'

	locale = "ukr";

	setlocale(0, locale.c_str());

	StrInfoAuthor = L"�����";
	StrInfoAppVersion = L"����i� ��������";
	StrInfoLaunchPosition = L"�i��� �������";

	StrQuestFile = L"I�'� i ������ ����� : ";

	StrWarning = L"�� �����������? (��� ��-�� ���� ���� �������) (\"yes\"/�� \"yes\") : ";

	////////////////////////////////////////////

	DescrAdd = L"Descr: ��������� � ����i���";
	DescrDoing = L"Descr: ����������i����� � ����i���";
	DescrDone = L"Descr: ����������i����� � ����i���";
	DescrHelp = L"Descr: Help �������� ���i";
	DescrShow = L"Descr: Show � ��������, ������ ��������";
	DescrDelete = L"Descr: ��������� � �������� ��� ������� i���������";
	DescrExit = L"Descr: Exit �� �������, ���� ������i�� ���� � ����i���";
	DescrInfo = L"Descr: ����� ������i ��� ������i��i�";
	DescrClear = L"Descr: Clean ��� ������������ ���� ����i�";
	DescrSave = L"Descr: ������������ � ���� ��������, �� ����� ����";
	DescrRename = L"Descr: ���� �� �i?";
	DescrLoad = L"Descr: �������� �������� ���i� ������ ������� ���������� � ������";
	DescrCreate = L"Descr: ����� ������� ������� ��-�� �����";
	DescrInvalid = L"Descr: �� �� ��������� �������";

	////////////////////////////////////////////

	HelpAdd = L"�������� ���� ��������";
	HelpDoing = L"���� �� �������� �� ����� (��������)";
	HelpDone = L"���� �� �������� �� ����� (��������)";
	HelpHelp = L"�������� ���i ��������� �������������";
	HelpShow = L"������ ��-�� ����";
	HelpDelete = L"������� �������� � �����";
	HelpExit = L"�������� � ��������";
	HelpInfo = L"i�������i� ��� ��������";
	HelpClear = L"����� �������";
	HelpSave = L"������� ��i� ����";
	HelpRename = L"����������� ����� ��-�� �����";
	HelpLoad = L"������� ��-�� ����";
	HelpCreate = L"������� ����� ������i� ��-�� ����";
	HelpSettings = L"���������� ������������";
	HelpTutorial = L"����� ����, �� ������������� ���������";
	HelpPanel = L"��������� � ������ � ����� �� ���������� � ������ ���������";
	HelpSelect = L"������ ����";
	HelpBack = L"������� � �������� ����";

	////////////////////////////////////////////

	SettingsNothingChange = L"������������ �� ��i������\n";
	SettingsShowDescription = L"�������� ����";
	SettingsShowDescriptionChange = L"���������� \"�������� ����\" ��� �������\n";
	SettingsSetLanguange = L"��i���� ���� ���������";
	SettingsSetLanguangeChange = L"���������� \"��i���� ���� ���������\" ��� �������\n";
	SettingsSetIsVertical = L"������ ������ �� ��-�� �����";
	SettingsSetIsVerticalChange = L"���������� \"������ ������\" ��� �������\n";

	////////////////////////////////////////////

	Tutorial = L"���� :\n�� ����� ������� ��i� ��-�� ���� i ���i��������� ����\n�� ���� ������ i ���� �������� �i��i ���� (��i?, �����i�� 'settings')\n�� ������������� :\n�� ����� ������� i ���������, ���� ���� ������\n�i� ���� ������, �������� ������ ��������i �i� (�������i�� �������� 'help')\n";
}
