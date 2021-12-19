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

	StrInfoAuthor = L"Автор";
	StrInfoAppVersion = L"Версия программы";
	StrInfoLaunchPosition = L"Место запуска";

	StrQuestFile = L"Имя и формат файлу : ";

	StrWarning = L"Ви соглашаетесь? (Этот То-До лист будет стерт) (\"yes\"/не \"yes\") : ";

	////////////////////////////////////////////

	DescrAdd = L"Descr: Создание это чистота";
	DescrDoing = L"Descr: Перерозподел это чистота";
	DescrDone = L"Descr: Перерозподел это чистота";
	DescrHelp = L"Descr: Help помогает тебе";
	DescrShow = L"Descr: Show есть полезным, просто посмотри";
	DescrDelete = L"Descr: Удаление полезное для очистки интерфейсу";
	DescrExit = L"Descr: Exit полезное, когда направляет тебе в терминал";
	DescrInfo = L"Descr: Описание полезные для начинающих";
	DescrClear = L"Descr: Clean для прикрытие планов";
	DescrSave = L"Descr: Резерирование это дуже важно, не спрашывай почему";
	DescrRename = L"Descr: Почему бы и нет?";
	DescrLoad = L"Descr: Вигрузка резервной копии быстрее ручного заповнення из голови";
	DescrCreate = L"Descr: Ктось потребует чистого То-До листа";
	DescrInvalid = L"Descr: Это неправильна команда";

	////////////////////////////////////////////

	HelpAdd = L"добавляет новые задание";
	HelpDoing = L"двигает это задание до листа (Делаеться)";
	HelpDone = L"двигает это задание до листа (Зделано)";
	HelpHelp = L"помагает тебе комфортно настроиться";
	HelpShow = L"показывает То-До лист";
	HelpDelete = L"удаляет задание из листа";
	HelpExit = L"выход из програми";
	HelpInfo = L"информация о програме";
	HelpClear = L"очищает консоль";
	HelpSave = L"резервирует твой лист";
	HelpRename = L"переименовует название То-До листа";
	HelpLoad = L"выгружает То-До лист";
	HelpCreate = L"создаёт новый пустой То-До лист";
	HelpSettings = L"настроить настройки";
	HelpTutorial = L"учить тебя, как пользоваться програмой";
	HelpPanel = L"направляет в панель в котором ты манипулируешь с другим таблицами";
	HelpSelect = L"вибырает лист";
	HelpBack = L"возвращает в выбраной лист";

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

	DescrAdd = L"Descr: Створення є чистiсть";
	DescrDoing = L"Descr: Перерозподiлення є чистiсть";
	DescrDone = L"Descr: Перерозподiлення є чистiсть";
	DescrHelp = L"Descr: Help допомагає тобi";
	DescrShow = L"Descr: Show є корисним, просто подивись";
	DescrDelete = L"Descr: Видалення є корисним для очистки iнтерфейсу";
	DescrExit = L"Descr: Exit це корисно, коли поеремiщує тебе в термiнал";
	DescrInfo = L"Descr: Описи кориснi для початкiвцiв";
	DescrClear = L"Descr: Clean для приховування твоїх планiв";
	DescrSave = L"Descr: Резервування є дуже важливим, не питай чому";
	DescrRename = L"Descr: Чому би нi?";
	DescrLoad = L"Descr: Вигрузка резервної копiї швидче ручного заповнення з голови";
	DescrCreate = L"Descr: Хтось потребує чистого То-До листа";
	DescrInvalid = L"Descr: Це не правильна команда";

	////////////////////////////////////////////

	HelpAdd = L"добавляє нове завдання";
	HelpDoing = L"рухає це завдання до листа (Робиться)";
	HelpDone = L"рухає це завдання до листа (Зроблено)";
	HelpHelp = L"допомагає тобi комфортно налаштуватися";
	HelpShow = L"показує То-До лист";
	HelpDelete = L"видаляє завдання з листа";
	HelpExit = L"виходити з програми";
	HelpInfo = L"iнформацiя про програму";
	HelpClear = L"очищає консоль";
	HelpSave = L"резервує твiй лист";
	HelpRename = L"перейменовує назву То-До листа";
	HelpLoad = L"вигружає То-До лист";
	HelpCreate = L"створює новий порожнiй То-До лист";
	HelpSettings = L"налашувати налаштування";
	HelpTutorial = L"вчить тебе, як користуватися програмою";
	HelpPanel = L"направляє в панель в якому ты манипулюєш з іншими таблицями";
	HelpSelect = L"вибирає дист";
	HelpBack = L"повертає у вибраний лист";

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
