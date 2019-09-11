#include <iostream>
using namespace std;



class personType{
    string firstName;
    string lastName;
public:
    const string &getFirstName() const {
        return firstName;
    }

    void setName(const string &firstName, const string &lastName) {
        personType::firstName = firstName;
        personType::lastName=lastName;

    }
    personType& setFirstName(const string &firstName){
        personType::firstName=firstName;
        return *this;

    }

    const string &getLastName() const {
        return lastName;
    }

    personType& setLastName(const string &lastName) {
        personType::lastName = lastName;
        return *this;
    }
    void print() const{
        cout << " First Name  : " << firstName << "  Last Name :: " << lastName << endl;

    }
    personType(const string fname="", const string lname=""):firstName(fname),lastName(lname){}
};

int main(){
    personType student1("Lisa", "Smith");
    personType student2;
    personType student3;
    student1.print();
    student2.setFirstName("Aanya").setLastName("Singh");
    student2.print();
    student3.setFirstName("Sonam");
    student3.print();
    student3.setLastName("Chaudhary");
    student3.print();
    return 0;
}
