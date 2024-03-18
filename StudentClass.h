#pragma once
#include <string>
using namespace std;
class StudentClass
{
	private:
		string Name;
		double FinGrades = 0;

	public:
		StudentClass(string n);

		string Student();

		void AddAverage(double s);

		double CalAverage(double amount);

		string GetLetterAverage(double average);
	};


