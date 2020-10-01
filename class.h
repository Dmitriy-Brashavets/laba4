#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

using namespace std;

class Job {
private:
    char* name;
    char* boss;
    int workers;
    void allocateChars(const char* _name);
    void allocateChars_boss(const char* _boss);

public:
    Job();
    Job(const char* _name, const char* _boss, int _workers);
    Job(const Job&);
    ~Job();
    void print();
};