#include "StudentClass.h"

StudentClass::StudentClass(string n) : Name(n) {}

string StudentClass::Student() {
    return Name;
}

void StudentClass::AddAverage(double s) {
    FinGrades += s;
}

double StudentClass::CalAverage(double amount) {
    return FinGrades / amount;
}

string StudentClass::GetLetterAverage(string Name) {
    return Name;
}
