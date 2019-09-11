/*
 * BRS.cpp
 *
 *  Created on: Aug 28, 2019
 *      Author: user1
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class account_query {
private:
	string m_account_number{};
	string m_first_name{};
	string m_last_name{};
	double m_total_balance{};
public:
	account_query(string account_number="", string first_name="", string last_name="",
		double balance=0.0) :
		m_account_number(account_number), m_first_name(first_name), m_last_name(
			last_name), m_total_balance(balance)
	{
	}
	void enter_data();
	void show_data();
	void write_rec();
	void read_rec();
	void edit_rec();
	void del_rec();
	void search_rec();
};

void account_query::enter_data()
{
	cout << "Enter the Account Number \n";
	cin >> m_account_number;
	cout << "Enter First Name \n";
	cin >> m_first_name;
	cout << "Enter last Name \n";
	cin >> m_last_name;
	cout << "Enter Total Balance \n";
	cin >> m_total_balance;
}
void account_query::show_data()
{
	cout << " Account Number :: " << m_account_number << endl;
	cout << " First Name    :: " << m_first_name << endl;
	cout << " Last Name     :: " << m_last_name << endl;
	cout << " Total Balance :: " << m_total_balance << endl;
	cout << "--------------------------------------" << endl;
}
void account_query::write_rec()
{
	ofstream outfile; // ofstream is class and outfile is an object of this class
	// File streams are associated with files either on construction, or by calling member open
	outfile.open("record.bank", ios::app | ios::binary); // ios::app|ios::binary open mode
	/*
	 member constant	    stands for	             access
	 in	                input	                 File open for reading: the internal stream buffer supports input operations.
	 out *	            output	                 File open for writing: the internal stream buffer supports output operations.
	 binary	            binary	                 Operations are performed in binary mode rather than text.
	 ate	                at end	                 The output position starts at the end of the file.
	 app	                append	                 All output operations happen at the end of the file, appending to its existing contents.
	 trunc	            truncate	             Any contents that existed in the file before it is open are discarded.*/
	enter_data();
	outfile.write(reinterpret_cast<char *>(this), sizeof(*this)); // write exepect a char * and this is how we can convert the one type to different data type
}
void account_query::read_rec()
{
	ifstream infile;
	infile.open("record.bank", ios::app | ios::binary);
	if (!infile)
	{
		cout << "Error in opening the file \n";
		return;
	}
	cout << "*********Data From File ************" << endl;
	while (!infile.eof())
	{
		if (infile.read(reinterpret_cast<char *>(this), sizeof(*this) > 0))
		{
			show_data();
		}

	}

}
void account_query::search_rec()
{
	int n;
	ifstream infile;
	infile.open("record.bank", ios::app | ios::binary);
	if (!infile)
	{
		cout << "Error in opening the file \n";
		return;
	}
// (1)	istream& seekg (streampos pos);
// (2)	istream& seekg (streamoff off, ios_base::seekdir way);

	infile.seekg(0, ios::end); // find the lenght from 0 to end and returns *this
	int count = infile.tellg() / sizeof(*this); // count the records
	cout << "\n There are " << count << " record in the file";
	cout << "\n Enter Record Number to Search: ";
	cin >> n;
	infile.seekg((n - 1) * sizeof(*this));
	infile.read(reinterpret_cast<char *>(this), sizeof(*this));
	show_data();

}
void account_query::edit_rec()
{
	int n;
	fstream iofile;
	iofile.open("record.bank", ios::binary | ios::app);
	if (!iofile)
	{
		cout << "Error in opening the file \n";
		return;
	}
	iofile.seekg(0, ios::end);
	int count = iofile.tellg() / sizeof(*this);
	cout << "There ate " << count << " Number of Records into file " << endl;
	cout << "Enter The number of Record you want to edit " << endl;
	cin >> n;
	iofile.seekg((n - 1) * sizeof(*this));
	iofile.read(reinterpret_cast<char *>(this), sizeof(*this));
	cout << "Record " << n << " has following data" << endl;
	show_data();
	iofile.close();
	iofile.open("record.bank", ios::out | ios::in | ios::binary);
	iofile.seekp((n - 1) * sizeof(*this));

	cout << "Enter data to Modify " << endl;
	enter_data();
	iofile.write(reinterpret_cast<char *>(this), sizeof(*this));
}
void account_query::del_rec()
{
	int n;
	ifstream infile;
	infile.open("record.bank", ios::binary);
	if (!infile)
	{
		cout << "Error in opening the file, File not found\n";
		return;
	}
	infile.seekg(0, ios::end);
	int count = infile.tellg() / sizeof(*this);
	cout << "There are " << count << " number of records in the file " << endl;
	cout << "Enter the record you want to delete \n";
	cin >> n;
	fstream tmpfile;
	tmpfile.open("tmpfile.bank", ios::binary | ios::out);
	infile.seekg(0);
	for (int i = 0; i < count; i++)
	{
		infile.read(reinterpret_cast<char *>(this), sizeof(*this));
		if (i == n - 1)
		{
			continue;
		}
		tmpfile.write(reinterpret_cast<char *>(this), sizeof(*this));
	}
	infile.close();
	tmpfile.close();
	remove("record.bank");
	rename("tmpfile.bank", "record.bank");

}

int main()
{
	account_query A;
	int choice;
	cout << "***Acount Information System***" << endl;
	while (true)
	{
		cout << "Select one option below ";
		cout << "\n\t1-->Add record to file";
		cout << "\n\t2-->Show record from file";
		cout << "\n\t3-->Search Record from file";
		cout << "\n\t4-->Update Record";
		cout << "\n\t5-->Delete Record";
		cout << "\n\t6-->Quit";
		cout << "\nEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			A.write_rec();
			break;
		case 2:
			A.read_rec();
			break;
		case 3:
			A.search_rec();
			break;
		case 4:
			A.edit_rec();
			break;
		case 5:
			A.del_rec();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "\nEnter correct choice";
			exit(0);
		}
	}
	return 0;
}

