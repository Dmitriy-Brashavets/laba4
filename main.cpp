#include "class.h"
int main() {
    Job* Job1 = new Job("Dmitriy", "Brashik", 0);
    Job Job2;
    Job Job3(*Job1);

    Job1->print();
    Job2.print();
    Job3.print();

    delete(Job1);

    return 0;
}