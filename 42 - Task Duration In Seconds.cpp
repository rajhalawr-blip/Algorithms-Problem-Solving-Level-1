#include<iostream>
#include<string>
using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSecounds;
};

int ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter Number Of Days?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter Number Of Hours?");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter Number of Minutes");
	TaskDuration.NumberOfSecounds = ReadPositiveNumber("Please enter Number Of Secunds?");

	return TaskDuration;
}

int TaskDurationInsecunds(strTaskDuration TaskDuration)
{
	int DurationInSecunds;

	DurationInSecunds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSecunds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSecunds += TaskDuration.NumberOfMinutes * 60;
	DurationInSecunds += TaskDuration.NumberOfSecounds;

	return DurationInSecunds;
}

int main()
{
	int TotalSecounds = TaskDurationInsecunds(ReadTaskDuration());

	cout << "\nTotal Secounds = " << TotalSecounds << " Secounds" << endl;

	return 0;
}