/*
 * 18_Quiz.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct StudentGrade{
	string name;
	char grade;
};

class GradeMap{
	vector<StudentGrade> m_map{};
public:
	GradeMap(){}
	char& operator[](const string &name);
};


char& GradeMap::operator [](const string &name){
	// See if we can find the name in the vector
	//vector<StudentGrade>::iterator it;
	for(auto &ref : m_map){
		if(ref.name==name){
			return ref.grade;
		}
	}
	// otherwise create a new StudentGrade for this student
	StudentGrade temp { name, ' ' };
	m_map.push_back(temp);
	// and return the element
	return m_map.back().grade;

}
int main(){

	GradeMap grades;

	char& gradeJoe = grades["Joe"]; // does a push_back
	gradeJoe = 'A';

	char& gradeFrank = grades["Frank"]; // does a push_back
	gradeFrank = 'B';

	std::cout << "Joe has a grade of " << gradeJoe << '\n';
	std::cout << "Frank has a grade of " << gradeFrank << '\n';
}

