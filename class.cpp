#include "class.h"

void Job::allocateChars(const char* _name) { // Выделяем память
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
}

void Job::allocateChars_boss(const char* _boss) { // Выделяем память
    boss = new char[strlen(_boss) + 1];
    strcpy(boss, _boss);
}

Job::Job() { // Конструктор без параметров
    allocateChars("Unnamed");
    allocateChars_boss("Unnamed");
    cout << "Create class Job without constructor params." << endl;
}

Job::Job(const char* _name, const char* _boss, int _workers) { // Конструктор с 3 параметрами
    allocateChars(_name);
    allocateChars_boss(_boss);
    workers = _workers;
    cout << "Create class Job with 3 constructor params." << endl;
}

Job::Job(const Job& _Job) { // Конструктор копирования
    allocateChars(_Job.name);
    allocateChars_boss(_Job.boss);
    workers = _Job.workers;
    cout << "Create class Job with copy constructor." << endl;
}

Job::~Job() { // Деструктор
    cout << "Call Job class "" << name << "" desctructor." << endl;
    cout << "Call Job class "" << boss << "" desctructor." << endl;
    delete[] name;
    delete[] boss;
}

void Job::print() { // Вывод
    cout << "\nName: " << name << "\nBoss: " << boss << "\nWorkers: ";
    if (workers) cout << 25; else cout << 10;
    cout << "\n" << endl;
}