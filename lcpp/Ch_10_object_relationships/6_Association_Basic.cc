/*
 * 6_Association.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 *
 *      A weaker type of relationship between two unrelated type of object, called an association
 *
 *
 *To qualify association an object and other object must have the following realtionship
 *1. The associated object(member) is otherwise unrelated to the object(class).
 *2. The associated object can belong to more than one object (class) at a time.
 *3. The associated object does not have its existance managed by the object(class)
 *4. The associated object may or may not known about the existance of the oject (class)
 *5.The ralationship may be unidirectional or bidirectional
 *6.Example : relationship between patient and doctor, The doctor has a clear relationship with his patient and it is not the part or part of patient object
 *7.(class). While doctoar may have relationship with number of pateint a time, Niether the lifespan tied to other
 *  Association Model "uses-a" relationship model
 *  like : The doctor uses the patient
 *  or The patient uses the doctor
 *  More Oftenly association are implemented using pointers where objects points at the associated object.
 */




