#include <iostream>
#include <string>
#include "StudentClass.h"

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

	cout << "The letter grade is: " << vsm.GetLetterAverage(vsm.CalAverage(amount)) << endl;

	// No return statement here
}
