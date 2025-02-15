/*
 * 4_Aggregation.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 *
 *      Like a composition, an aggregation is still a part-whole relationship, where the parts are contained within the whole,
 *      and it is a unidirectional relationship.
 *      However, unlike a composition, parts can belong to more than one object at a time, and the whole object is not responsible
 *      for the existence and lifespan of the parts.
 *
 *
 *      Example : Relationship between person an its home address
 *      Every person has-a home adress and same home address can be share by more then one person at same time
 *      and there are possibilities that address existed before the person went there and will remain after person gone from there
 *
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Teacher{
	string m_name;
public:
	Teacher(string name):m_name(name){}

	string getName(){
		return m_name;
	}
};

class Deprtment{
private:
	Teacher *m_teacher; // This dept holds a single teacher for simplicity it can have more teacher as well

public:
	Deprtment(Teacher *teacher=nullptr):m_teacher(teacher){}
};


int main(){

	// Create a teacher outside the scope of the Department

	Teacher *teacher =new Teacher("Bob"); // create a teacher

	{
		// Create a department and use the constructor parameter to pass
		        // the teacher to it.

		Deprtment dept(teacher);
	}  // dept goes out of scope here and is destroyed
	/*

	*/
	//  Teacher still exists here because dept did not delete m_teacher
	std::cout << teacher->getName() << " still exists!" << "\n";
	delete teacher;
}

/*
Summarizing composition and aggregation

Compositions:

Typically use normal member variables
Can use pointer members if the class handles object allocation/deallocation itself
Responsible for creation/destruction of parts
Aggregations:

Typically use pointer or reference members that point to or reference objects that live outside the scope of the aggregate class
Not responsible for creating/destroying parts

*/
