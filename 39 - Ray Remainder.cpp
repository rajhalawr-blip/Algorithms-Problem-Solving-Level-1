#include<iostream>
#include<string>

using namespace std;

float ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	
	return Number;
}

float CalculateRemainder(float TotalBill, float TotalCachPaid)
{
	return TotalCachPaid - TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please enter Total Bill?");
	float TotalCashPaid = ReadPositiveNumber("Please enter Cash Paid?");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cah Paid = " << TotalCashPaid << endl;

	cout << "************************" << endl;
	cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

	return 0;
}