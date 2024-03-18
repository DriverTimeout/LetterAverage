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

string StudentClass::GetLetterAverage(double average) {
	if (average >= 100) {
		return "A+";
	}
	else if (average >= 93) {
		return "A";
	}
	else if (average >= 90) {
		return "A-";
	}
	else if (average >= 87) {
		return "B+";
	}
	else if (average >= 83) {
		return "B";
	}
	else if (average >= 80) {
		return "B-";
	}
	else if (average >= 77) {
		return "C+";
	}
	else if (average >= 73) {
		return "C";
	}
	else if (average >= 70) {
		return "C-";
	}
	else if (average >= 67) {
		return "D+";
	}
	else if (average >= 63) {
		return "D";
	}
	else if (average >= 60) {
		return "D-";
	}
	else {
		return "F";
	}
}

