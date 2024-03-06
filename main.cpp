#include <iostream>
#include <string>
#include "StudentClass.h" // Assuming StudentClass is in a header file named StudentClass.h

using namespace std;

int main() {
    string Name;
    double grades;
    double FinGrades = 0;
    int c = 1;
    int amount;

    cout << "The Grade Calc App" << endl;
    cout << "===============" << endl;
    cout << "Enter the Student's name: " << endl;
    getline(cin, Name);
    cout << "How many grades do you want to evaluate: " << endl;
    cin >> amount;

    StudentClass vsm(Name);

    while (c <= amount) {
        cout << "Enter the grade: ";
        cin >> FinGrades;
        vsm.AddAverage(FinGrades);
        c++;
    }

    cout << "The student's name: " << vsm.Student() << endl;
    cout << "The average grade: " << vsm.CalAverage(amount) << endl;

    if (vsm.CalAverage(amount) >= 100) {
        Name = "A+";
    } else if (vsm.CalAverage(amount) >= 93) {
        Name = "A";
    } else if (vsm.CalAverage(amount) >= 90) {
        Name = "A-";
    } else if (vsm.CalAverage(amount) >= 87) {
        Name = "B+";
    } else if (vsm.CalAverage(amount) >= 83) {
        Name = "B";
    } else if (vsm.CalAverage(amount) >= 80) {
        Name = "B-";
    } else if (vsm.CalAverage(amount) >= 77) {
        Name = "C+";
    } else if (vsm.CalAverage(amount) >= 73) {
        Name = "C";
    } else if (vsm.CalAverage(amount) >= 70) {
        Name = "C-";
    } else if (vsm.CalAverage(amount) >= 67) {
        Name = "D+";
    } else if (vsm.CalAverage(amount) >= 63) {
        Name = "D";
    } else if (vsm.CalAverage(amount) >= 60) {
        Name = "D-";
    } else if (vsm.CalAverage(amount) <= 60) {
        Name = "F";
    }

    cout << "The letter grade is: " << vsm.GetLetterAverage(Name) << endl;

    // No return statement here

}
