#include <QVector>
#include <math.h>
#include <iostream>

using std::cout;
using std::endl;

void Task1() {
    cout << "task1: " << endl;
    QVector <int> vec, rez;
    vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 13 };
    for (int i = 0; i < vec.size(); i += 2)
        rez += vec[i];
    for (int i = 1; i < vec.size(); i += 2)
        if(i >= vec.size()) break;
        else rez += vec[i];
    cout << "initial: ";
    foreach(int el, vec)
        cout << el << " ";
    cout << endl << "rezult: ";
    foreach(int el, rez)
        cout << el << " ";
    cout << endl << "========================" << endl;
}

void Task2() {
    cout << "task2: " << endl;
    QVector <int> vec;
    int rez = 1;
    vec = { 1 , 5, 2, 3, -6, 5, 5, 2 };
    QVector <int> :: iterator iter1, iterMax, iterMin;
    int max = 0, min = 100;
    for(iter1 = vec.begin(); iter1 != vec.end(); ++iter1) {
        if (max < abs(*iter1)) {
            max = abs(*iter1);
            iterMax = iter1;
        }
        if (min > abs(*iter1)) {
            min = abs(*iter1);
            iterMin = iter1;
        }
    }
    for(iter1 = iterMin; iter1 != iterMax + 1; ++iter1)
        rez *= (*iter1);
    cout << "initial: ";
    foreach (int el, vec)
        cout << el << " ";
    cout <<"\nrez: " << rez;
}

int main() {
    Task1();
    Task2();
}
