/*
 * 7_Virtual_Table.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1

1. The virtual table: Every class that uses virtual function or that is derived for the class which uses virtual function it's given its own virtual table
2. This table is simply a static array that the compiler sets up at compile time.
3. A virtual table contains one entry for each virtual function that can be called by objects of the class
4.  Each entry in this table is simply a function pointer that points to the most-derived function accessible by that class.


*/

class Base
{
public:
    virtual void function1() {}; // There will a vtable having 2 entries 1. void function1(). 2. void function2()

    virtual void function2() {};
};

class D1: public Base
{
public:
    virtual void function1() {}; // One vtable for this class having only single entry of void function1()
};

class D2: public Base
{
public:
    virtual void function2() {};  // // One vtable for this class having only single entry of void function2()
};


// The compiler also adds a hidden pointer to the most base class that uses virtual functions

class Base
{
public:
    FunctionPointer *__vptr;
    virtual void function1() {};
    virtual void function2() {};
};

class D1: public Base
{
public:
    virtual void function1() {};
};

class D2: public Base
{
public:
    virtual void function2() {};
};

// When a class object is created, *__vptr is set to point to the virtual table for that class
// For example, when a object of type Base is created, *__vptr is set to point to the virtual table for Base
//When a class object is created, *__vptr is set to point to the virtual table for that class. For example, when a object of type Base is created, *__vptr is set to point to the virtual table for Base.
// When objects of type D1 or D2 are constructed, *__vptr is set to point to the virtual table for D1 or D2 respectively.



