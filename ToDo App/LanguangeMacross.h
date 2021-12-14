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

////////////////////////////////////////////

std::wstring SettingsNothingChange;
std::wstring SettingsShowDescription;
std::wstring SettingsShowDescriptionChange;
std::wstring SettingsSetLanguange;
std::wstring SettingsSetLanguangeChange;
std::wstring SettingsSetIsVertical;
std::wstring SettingsSetIsVerticalChange;

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

	DescrAdd = L"Descr: Creating is clearer\n";
	DescrDoing = L"Descr: Retargeting is clearer\n";
	DescrDone = L"Descr: Retargeting is clearer\n";
	DescrHelp = L"Descr: Help is helping you\n";
	DescrShow = L"Descr: Show is useful, just watch\n";
	DescrDelete = L"Descr: Deleting is useful for cleaning interface\n";
	DescrExit = L"Descr: Exit it's useful for retarget to terminal\n";
	DescrInfo = L"Descr: Description is useful for beginners\n";
	DescrClear = L"Descr: Clean for hiding your plans\n";
	DescrSave = L"Descr: Back up is very important\n";
	DescrRename = L"Descr: Why not?\n";
	DescrLoad = L"Descr: Loading Back up is so quickly\n";
	DescrCreate = L"Descr: Whose need start new to-do list\n";
	DescrInvalid = L"Descr: it's not correct command\n";
	DescrClear = L"Descr: Clean for hiding your plans\n";

	////////////////////////////////////////////

	HelpAdd = L"Add new task\n";
	HelpDoing = L"move current tast to list (Doing)\n";
	HelpDone = L"move current task to list (Done)\n";
	HelpHelp = L"help you for comfortably set\n";
	HelpShow = L"show lists\n";
	HelpDelete = L"delete task from lists\n";
	HelpExit = L"exit from application\n";
	HelpInfo = L"information about app\n";
	HelpClear = L"clear console\n";
	HelpSave = L"create back up of your list\n";
	HelpRename = L"rename title of your todo list\n";
	HelpLoad = L"loading todo list into app\n";
	HelpCreate = L"create new empty todo list\n";
	HelpSettings = L"set settings\n";
	HelpTutorial = L"learn you, how use the application\n";

	////////////////////////////////////////////

	SettingsNothingChange = L"Settings isn't changed\n";
	SettingsShowDescription = L"show description";
	SettingsShowDescriptionChange = L"Setting \"Show Descreiption\" is changed\n";
	SettingsSetLanguange = L"change languange output";
	SettingsSetLanguangeChange = L"Setting \"Change Languange\" is changed\n";
	SettingsSetIsVertical = L"change vision on todo list";
	SettingsSetIsVerticalChange = L"Setting \"Change Vision\" is changed\n";

	////////////////////////////////////////////

	Tutorial = L"Why :\n you can made own to-do table and manipulate with that\nit's very flexible and it can out in multiple languange (which?, type 'settings')\nHow to use :\nyou type a command and argumet, if it's had\nfrom your command, application make current action (about it type 'help')\n";

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

	DescrAdd = L"Descr: �������� ��� �������\n";
	DescrDoing = L"Descr: ������������ ��� �������\n";
	DescrDone = L"Descr: ������������ ��� �������\n";
	DescrHelp = L"Descr: Help �������� ����\n";
	DescrShow = L"Descr: Show ���� ��������, ������ ��������\n";
	DescrDelete = L"Descr: �������� �������� ��� ������� ����������\n";
	DescrExit = L"Descr: Exit ��������, ����� ���������� ���� � ��������\n";
	DescrInfo = L"Descr: �������� �������� ��� ����������\n";
	DescrClear = L"Descr: Clean ��� ��������� ������\n";
	DescrSave = L"Descr: ������������� ��� ���� �����, �� ��������� ������\n";
	DescrRename = L"Descr: ������ �� � ���?\n";
	DescrLoad = L"Descr: �������� ��������� ����� ������� ������� ���������� �� ������\n";
	DescrCreate = L"Descr: ����� ��������� ������� ��-�� �����\n";
	DescrInvalid = L"Descr: ��� ����������� �������\n";

	////////////////////////////////////////////

	HelpAdd = L"��������� ����� �������\n";
	HelpDoing = L"������� ��� ������� �� ����� (���������)\n";
	HelpDone = L"������� ��� ������� �� ����� (�������)\n";
	HelpHelp = L"�������� ���� ��������� �����������\n";
	HelpShow = L"���������� ��-�� ����\n";
	HelpDelete = L"������� ������� �� �����\n";
	HelpExit = L"����� �� ��������\n";
	HelpInfo = L"���������� � ��������\n";
	HelpClear = L"������� �������\n";
	HelpSave = L"����������� ���� ����\n";
	HelpRename = L"������������� �������� ��-�� �����\n";
	HelpLoad = L"��������� ��-�� ����\n";
	HelpCreate = L"������ ����� ������ ��-�� ����\n";
	HelpSettings = L"��������� ���������\n";
	HelpTutorial = L"����� ����, ��� ������������ ���������\n";

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

	DescrAdd = L"Descr: ��������� � ����i���\n";
	DescrDoing = L"Descr: ����������i����� � ����i���\n";
	DescrDone = L"Descr: ����������i����� � ����i���\n";
	DescrHelp = L"Descr: Help �������� ���i\n";
	DescrShow = L"Descr: Show � ��������, ������ ��������\n";
	DescrDelete = L"Descr: ��������� � �������� ��� ������� i���������\n";
	DescrExit = L"Descr: Exit �� �������, ���� ������i�� ���� � ����i���\n";
	DescrInfo = L"Descr: ����� ������i ��� ������i��i�\n";
	DescrClear = L"Descr: Clean ��� ������������ ���� ����i�\n";
	DescrSave = L"Descr: ������������ � ���� ��������, �� ����� ����\n";
	DescrRename = L"Descr: ���� �� �i?\n";
	DescrLoad = L"Descr: �������� �������� ���i� ������ ������� ���������� � ������\n";
	DescrCreate = L"Descr: ����� ������� ������� ��-�� �����\n";
	DescrInvalid = L"Descr: �� �� ��������� �������\n";

	////////////////////////////////////////////

	HelpAdd = L"�������� ���� ��������\n";
	HelpDoing = L"���� �� �������� �� ����� (��������)\n";
	HelpDone = L"���� �� �������� �� ����� (��������)\n";
	HelpHelp = L"�������� ���i ��������� �������������\n";
	HelpShow = L"������ ��-�� ����\n";
	HelpDelete = L"������� �������� � �����\n";
	HelpExit = L"�������� � ��������\n";
	HelpInfo = L"i�������i� ��� ��������\n";
	HelpClear = L"����� �������\n";
	HelpSave = L"������� ��i� ����\n";
	HelpRename = L"����������� ����� ��-�� �����\n";
	HelpLoad = L"������� ��-�� ����\n";
	HelpCreate = L"������� ����� ������i� ��-�� ����\n";
	HelpSettings = L"���������� ������������\n";
	HelpTutorial = L"����� ����, �� ������������� ���������\n";

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
