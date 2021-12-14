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

	StrInfoAuthor = L"Автор";
	StrInfoAppVersion = L"Версия программы";
	StrInfoLaunchPosition = L"Место запуска";

	StrQuestFile = L"Имя и формат файлу : ";

	StrWarning = L"Ви соглашаетесь? (Этот То-До лист будет стерт) (\"yes\"/не \"yes\") : ";

	////////////////////////////////////////////

	DescrAdd = L"Descr: Создание это чистота\n";
	DescrDoing = L"Descr: Перерозподел это чистота\n";
	DescrDone = L"Descr: Перерозподел это чистота\n";
	DescrHelp = L"Descr: Help помогает тебе\n";
	DescrShow = L"Descr: Show есть полезным, просто посмотри\n";
	DescrDelete = L"Descr: Удаление полезное для очистки интерфейсу\n";
	DescrExit = L"Descr: Exit полезное, когда направляет тебе в терминал\n";
	DescrInfo = L"Descr: Описание полезные для начинающих\n";
	DescrClear = L"Descr: Clean для прикрытие планов\n";
	DescrSave = L"Descr: Резерирование это дуже важно, не спрашывай почему\n";
	DescrRename = L"Descr: Почему бы и нет?\n";
	DescrLoad = L"Descr: Вигрузка резервной копии быстрее ручного заповнення из голови\n";
	DescrCreate = L"Descr: Ктось потребует чистого То-До листа\n";
	DescrInvalid = L"Descr: Это неправильна команда\n";

	////////////////////////////////////////////

	HelpAdd = L"добавляет новые задание\n";
	HelpDoing = L"двигает это задание до листа (Делаеться)\n";
	HelpDone = L"двигает это задание до листа (Зделано)\n";
	HelpHelp = L"помагает тебе комфортно настроиться\n";
	HelpShow = L"показывает То-До лист\n";
	HelpDelete = L"удаляет задание из листа\n";
	HelpExit = L"выход из програми\n";
	HelpInfo = L"информация о програме\n";
	HelpClear = L"очищает консоль\n";
	HelpSave = L"резервирует твой лист\n";
	HelpRename = L"переименовует название То-До листа\n";
	HelpLoad = L"выгружает То-До лист\n";
	HelpCreate = L"создаёт новый пустой То-До лист\n";
	HelpSettings = L"настроить настройки\n";
	HelpTutorial = L"учить тебя, как пользоваться програмой\n";

	////////////////////////////////////////////

	SettingsNothingChange = L"Настройки не змiнилися\n";
	SettingsShowDescription = L"показать описание";
	SettingsShowDescriptionChange = L"Настройка \"Показать Описание\" изменилось\n";
	SettingsSetLanguange = L"изменить язык вивода";
	SettingsSetLanguangeChange = L"Настройка \"Изменить Язык Вивода\" изменилось\n";
	SettingsSetIsVertical = L"change vision on todo list";
	SettingsSetIsVerticalChange = L"Setting \"Change Vision\" is changed\n";

	////////////////////////////////////////////

	Tutorial = L"Почему :\nты можешь сделать свой То-До лист и манипулировать с ними\nэто очень гнучкой и может виводить разные языки (какие?, напишыте 'settings')\nКак пользоваться :\nты пишешь команди и аргументы, есль они будут\nот твоих команд, програма делает конкретные действие (детальнее напечатая 'help')\n";
}

void SetUkraine() {
	//without ukranian symbol 'і'

	locale = "ukr";

	setlocale(0, locale.c_str());

	StrInfoAuthor = L"Автор";
	StrInfoAppVersion = L"Версiя програми";
	StrInfoLaunchPosition = L"Мiсце запуску";

	StrQuestFile = L"Iм'я i формат файлу : ";

	StrWarning = L"Ви погоджуєтеся? (Цей То-До лист буде стертим) (\"yes\"/не \"yes\") : ";

	////////////////////////////////////////////

	DescrAdd = L"Descr: Створення є чистiсть\n";
	DescrDoing = L"Descr: Перерозподiлення є чистiсть\n";
	DescrDone = L"Descr: Перерозподiлення є чистiсть\n";
	DescrHelp = L"Descr: Help допомагає тобi\n";
	DescrShow = L"Descr: Show є корисним, просто подивись\n";
	DescrDelete = L"Descr: Видалення є корисним для очистки iнтерфейсу\n";
	DescrExit = L"Descr: Exit це корисно, коли поеремiщує тебе в термiнал\n";
	DescrInfo = L"Descr: Описи кориснi для початкiвцiв\n";
	DescrClear = L"Descr: Clean для приховування твоїх планiв\n";
	DescrSave = L"Descr: Резервування є дуже важливим, не питай чому\n";
	DescrRename = L"Descr: Чому би нi?\n";
	DescrLoad = L"Descr: Вигрузка резервної копiї швидче ручного заповнення з голови\n";
	DescrCreate = L"Descr: Хтось потребує чистого То-До листа\n";
	DescrInvalid = L"Descr: Це не правильна команда\n";

	////////////////////////////////////////////

	HelpAdd = L"добавляє нове завдання\n";
	HelpDoing = L"рухає це завдання до листа (Робиться)\n";
	HelpDone = L"рухає це завдання до листа (Зроблено)\n";
	HelpHelp = L"допомагає тобi комфортно налаштуватися\n";
	HelpShow = L"показує То-До лист\n";
	HelpDelete = L"видаляє завдання з листа\n";
	HelpExit = L"виходити з програми\n";
	HelpInfo = L"iнформацiя про програму\n";
	HelpClear = L"очищає консоль\n";
	HelpSave = L"резервує твiй лист\n";
	HelpRename = L"перейменовує назву То-До листа\n";
	HelpLoad = L"вигружає То-До лист\n";
	HelpCreate = L"створює новий порожнiй То-До лист\n";
	HelpSettings = L"налашувати налаштування\n";
	HelpTutorial = L"вчить тебе, як користуватися програмою\n";

	////////////////////////////////////////////

	SettingsNothingChange = L"Налаштування не змiнилися\n";
	SettingsShowDescription = L"показати опис";
	SettingsShowDescriptionChange = L"Налаштунок \"Показати Опис\" був зміненим\n";
	SettingsSetLanguange = L"змiнити мову виведення";
	SettingsSetLanguangeChange = L"Налаштунок \"Змiнити Мову Виведення\" був зміненим\n";
	SettingsSetIsVertical = L"змінити вигляд на То-До листа";
	SettingsSetIsVerticalChange = L"Налаштунок \"Змінити вигляд\" був зміненим\n";

	////////////////////////////////////////////

	Tutorial = L"Чому :\nти можеш зробити свiй То-До лист i манiпулюватиз ними\nце дуже гнучко i може виводити рiзнi мови (якi?, напишiть 'settings')\nЯк користуватися :\nти пишеш команди i агрументи, якщо вони будуть\nвiд твоїх команд, програма робить конкретнi дiї (детальнiше набравши 'help')\n";
}
