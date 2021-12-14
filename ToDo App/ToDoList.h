#pragma once
#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <stdio.h>

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

class ToDoList {

    std::wstring name;

    std::list<std::wstring> ToDo;
    std::list<std::wstring> Doing;
    std::list<std::wstring> Done;

public:
    ToDoList(std::wstring name) {
        this->name = name;
    }

    void AddTask(std::wstring todo) {
        this->ToDo.push_back(todo);
    }

    void DoingTask(std::wstring what);

    void DoneTask(std::wstring what);

    void DeleteTask(std::wstring what);

    void ShowVerticalList();

    void ShowHorizontalList();

    void SaveList(std::wstring dir);

    void Rename(std::wstring name) {
        this->name = name;
    }

    std::wstring Name() {
        return name;
    }

    int MaxString();

    void LoadList(std::wstring dir);

    void CreateNewList();
};

