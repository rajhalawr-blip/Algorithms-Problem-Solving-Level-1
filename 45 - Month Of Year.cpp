#include <iostream>
#include <string>
using namespace std;

enum enMounthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, 
	                  May = 5, June = 6, July = 7, Aug = 8, 
					  Sep = 9, Oct = 10, Nov = 11, Dec = 12};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMounthOfYear ReadMounthOfYear()
{
	return (enMounthOfYear) ReadNumberInRange("Please enter Number 1 To 12", 1, 12);
}

string GetMounthOfYear(enMounthOfYear Mounth)
{
	switch (Mounth)
	{
	case enMounthOfYear::Jan:
		return "January";
	case enMounthOfYear::Feb:
		return "February";
	case enMounthOfYear::Mar:
		return "March";
	case enMounthOfYear::Apr:
		return "April";
	case enMounthOfYear::May:
		return "May";
	case enMounthOfYear::June:
		return "January";
	case enMounthOfYear::July:
		return "July";
	case enMounthOfYear::Aug:
		return "August";
	case enMounthOfYear::Sep:
		return "Septmber";
	case enMounthOfYear::Oct:
		return "October";
	case enMounthOfYear::Nov:
		return "November";
	case enMounthOfYear::Dec:
		return "December";
	default:
		return "Not a Valid Mounth";
	}
}

int main()
{
	
	cout << GetMounthOfYear(ReadMounthOfYear()) << endl;

	return 0;
}