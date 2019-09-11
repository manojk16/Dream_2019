/*
 * main.cpp
 *
 *  Created on: Aug 31, 2019
 *      Author: user1
 */
#include <iostream>
#include <string>
#include "3_day_type.h"
using namespace std;
void showSelections();
int main()
{
	dayType userDay;
	int currentDay;
	int addDays;
	int test;
	string day;

	do
	{
		test = 0;
		showSelections();
		cin >> currentDay;
		cout << endl;
		if (currentDay == 0)
		{
			userDay.setDay("Sunday");
		}
		else if (currentDay == 1)
		{
			userDay.setDay("Monday");
		}
		else if (currentDay == 2)
		{
			userDay.setDay("Tuesday");
		}
		else if (currentDay == 3)
		{
			userDay.setDay("Wednesday");
		}
		else if (currentDay == 4)
		{
			userDay.setDay("Thursday");
		}
		else if (currentDay == 5)
		{
			userDay.setDay("Friday");
		}
		else if (currentDay == 6)
		{
			userDay.setDay("Saturday");
		}
		else if (currentDay == 9)
		{
			cout << "Exiting...";
			return 0;
		}
		else
		{
			cout << "Not a valid choice." << endl;
			test = -37;
		}
	}

	while (test < 0);
	userDay.printDay();
	cout << endl;
	userDay.showDay(currentDay);
	cout << endl;
	userDay.nextDay(currentDay);
	cout << endl;
	userDay.prevDay(currentDay);
	cout << endl;
	cout << "Enter the number of days to add: " << endl;
	cin >> addDays;
	cout << endl;
	userDay.calcDay(currentDay, addDays);
	cout << endl;
	cout << endl << endl;
	system("pause");
	return 0;
}

// Function to display weekday selections.
void showSelections()
{
	cout << "*****Please enter a day of the week*****" << endl;
	cout << "0 for Sunday" << endl;
	cout << "1 for Monday" << endl;
	cout << "2 for Tuesday" << endl;
	cout << "3 for Wednesday" << endl;
	cout << "4 for Thursday" << endl;
	cout << "5 for Friday" << endl;
	cout << "6 for Saturday" << endl;
	cout << "9 to exit" << endl;
}





