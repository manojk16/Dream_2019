#ifndef _DAY_TYPE_H
#define _DAY_TYPE_H
#include <iostream>
using namespace std;

class dayType {
private:
	string m_days[7];
	string m_currentDay;
	int m_numDays;

public:
	void setDay(const string &newDay);
	void printDay() const;
	int showDay(int &day);
	int nextDay(int day);
	int prevDay(int day);
	int calcDay(int Day, int numDay);

	dayType()
	{
		m_days[0] = "Sunday";
		m_days[1] = "Monday";
		m_days[2] = "Tuesday";
		m_days[3] = "Wednesday";
		m_days[4] = "Thursday";
		m_days[5] = "Friday";
		m_days[6] = "Saturday";
		m_currentDay = m_days[0];
		m_numDays = 0;
	}
	~dayType()
	{
	}
};
void dayType::setDay(const string& newDay)
{
	m_currentDay = newDay;
}

void dayType::printDay() const
{
	cout << "Day Choosen is " << m_currentDay << endl;
}
int dayType::showDay(int &day)
{
	return day;
}
int dayType::nextDay(int day)
{
	day = day++;
	if (day > 6)
	{
		day = day % 7;
	}
	switch (day)
	{
	case 0:
		cout << "The next Day is Sunday" << endl;
		break;
	case 1:
		cout << "The next Day is Monday" << endl;
		break;
	case 2:
		cout << "The next Day is Tuesday" << endl;
		break;
	case 3:
		cout << "The next Day is Wednesday" << endl;
		break;
	case 4:
		cout << "The next Day is Thursday" << endl;
		break;
	case 5:
		cout << "The next Day is Friday" << endl;
		break;
	case 6:
		cout << "The next Day is Saturday" << endl;
		break;
	}
	cout << endl;
	return day;
}
int prevDay(int day)
{
	day = day--;
	switch (day)
	{
	case -1:
		cout << "The Previous Day is Saturday" << endl;
		break;
	case 0:
		cout << "The Previous Day is Sunday" << endl;
		break;
	case 1:
		cout << "The Previous Day is Monday" << endl;
		break;
	case 2:
		cout << "The Previous Day is Tuesday" << endl;
		break;
	case 3:
		cout << "The Previous Day is Wednesday" << endl;
		break;
	case 4:
		cout << "The Previous Day is Thursday" << endl;
		break;
	case 5:
		cout << "The Previous Day is Friday" << endl;
		break;

	}
	cout << endl;
	return day;

}
int dayType::calcDay(int addDays, int numdays)
{
	addDays = addDays + numdays;
	if (addDays > 6)
		addDays = addDays % 7;
	switch (addDays)
	{
	case 0:
		cout << "The calculated day is Sunday.";
		break;
	case 1:
		cout << "The calculated day is Monday.";
		break;
	case 2:
		cout << "The calculated day is Tuesday.";
		break;
	case 3:
		cout << "The calculated day is Wednesday.";
		break;
	case 4:
		cout << "The calculated day is Thursday.";
		break;
	case 5:
		cout << "The calculated day is Friday.";
		break;
	case 6:
		cout << "The calculated day is Saturday.";
		break;
	default:
		cout << "Not valid choice.";
	}
	cout << endl;
	return addDays;
}
#endif
