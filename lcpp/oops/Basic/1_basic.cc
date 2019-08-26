#include<iostream>
#include<string.h>
using namespace std;
class human
{
public:
string *name;
int *age;
public:
human(string iname,int iage)
{  name = new string;
  age = new int;
    *name = iname;
    *age= iage;
    cout<<"hello"<<endl;

}
void display()
{

    cout<<"hi i am"<<*name<<"and i am"<<*age<<"years old"<<endl;
}

~human()
{
    cout<<"all memories are released "<<endl;
    delete name;
    delete age;
}
};
int main()
{
    human *anil=new human("anil",18);

  //  delete anil;
anil->display();

delete anil;

    return 0;
}
