#include<iostream>
#include<cmath>
#include<string>
using namespace std;

struct strTaskDuratuion
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSecounds;
};

float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

strTaskDuratuion SecoundsToTaskDeuration(int TotalSecunds)
{
	strTaskDuratuion TaskDuration;

	const int SecoundsPerDay = 24 * 60 * 60;
	const int SecoundsPerHours = 60 * 60;
	const int SecoundsPerMinutes = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSecunds / SecoundsPerDay);
	Remainder = TotalSecunds % SecoundsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecoundsPerHours);
	Remainder = Remainder % SecoundsPerHours;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecoundsPerMinutes);
	Remainder = Remainder % SecoundsPerMinutes;
	TaskDuration.NumberOfSecounds = Remainder;

	return TaskDuration;
}

void printTaskDurationDetails(strTaskDuratuion TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSecounds << "\n";
}

int main()
{
	int TotalSecounds = ReadPositiveNumber("Please enter A Total Secound?");
	printTaskDurationDetails(SecoundsToTaskDeuration(TotalSecounds));

	return 0;
}