/*
 * 7_Association_Implementation.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 */

#include <iostream>
#include <cassert>
#include <string>
#include <vector>

using namespace std;

class Patient;

class Doctor {
	string m_name;
	vector<Patient *> m_patient;
public:
	Doctor(string name) :
		m_name(name)
	{

	}
	void addPatient(Patient *pat);
	friend ostream& operator<<(ostream& out, const Doctor& doc);
	string getname() const
	{
		return m_name;
	}
};
class Patient {
	string m_name;
	vector<Doctor *> m_doctor;
	void addDoctor(Doctor *doc)
	{
		m_doctor.push_back(doc);
	}
public:
	Patient(string name) :
		m_name(name)
	{

	}
	friend ostream& operator<<(ostream& out, const Patient& pt);
	string getName() const
	{
		return m_name;
	}
	friend void Doctor::addPatient(Patient *pat);
};

void Doctor::addPatient(Patient *pat)
{
	// doctor will add the patient
	m_patient.push_back(pat);
	// add the patient will add aslo this doctor
	pat->addDoctor(this);
}

ostream& operator<<(ostream& out, const Doctor& doc)
{
	unsigned int length = doc.m_patient.size();
	if (length == 0)
	{
		out << doc.m_name << "has no patient right now \n";
		return out;
	}
	out << doc.m_name << "is seing the patient " << endl;

	for (unsigned int count = 0; count < length; ++count)
	{

		out << doc.m_patient[count]->getName() << ' ';
	}
	return out;
}

ostream operator<<(ostream& out, const Patient& pt)
{
	unsigned int length = pt.m_doctor.size();
	if (length == 0)
	{
		out << pt.getName() << "has no doctor right now" << endl;
		return out;
	}
	out << pt.m_name << "is seeing the doctor" << endl;
	for (unsigned int count = 0; count < length; ++count)
		out << pt.m_doctor[count]->getname()<< ' ';

	return out;
}
int main()
{
	// Create a Patient outside the scope of the Doctor
	Patient *p1 = new Patient("Dave");
	Patient *p2 = new Patient("Frank");
	Patient *p3 = new Patient("Betsy");

	Doctor *d1 = new Doctor("James");
	Doctor *d2 = new Doctor("Scott");

	d1->addPatient(p1);

	d2->addPatient(p1);
	d2->addPatient(p3);

	std::cout << *d1 << '\n';
	std::cout << *d2 << '\n';
	std::cout << *p1 << '\n';
	std::cout << *p2 << '\n';
	std::cout << *p3 << '\n';

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}
