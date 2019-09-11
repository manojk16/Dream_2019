
//  Composition is another way to relate two classes. In composition, one or more members
//of a class are objects of another class type. Composition is a ‘‘has-a’’ relationship; for
//example, ‘‘every person has a date of birth
#include <iostream>
#include <string>
using namespace std;


class personType{
    string firstName;
    string lastName;
public:
    personType(const string &firstName, const string &lastName) : firstName(firstName), lastName(lastName) {}

    const string &getFirstName() const {
        return firstName;
    }

    void setFirstName(const string &firstName) {
        personType::firstName = firstName;
    }

    const string &getLastName() const {
        return lastName;
    }

    void setLastName(const string &lastName) {
        personType::lastName = lastName;
    }

    bool operator==(const personType &rhs) const {
        return firstName == rhs.firstName &&
               lastName == rhs.lastName;
    }

    bool operator!=(const personType &rhs) const {
        return !(rhs == *this);
    }

    friend ostream &operator<<(ostream &out, const personType &type) {
        os << "firstName: " << type.firstName << " lastName: " << type.lastName;
        return out;
    }

    virtual ~personType() {

    }
};

class DateType{
    int m_month;
    int m_day;
    int m_year;
public:
    int getMMonth() const {
        return m_month;
    }

    int getMDay() const {
        return m_day;
    }

    int getMYear() const {
        return m_year;
    }
    void setDate(int m, int d, int y){
        m_month=m;
        m_day=d;
        m_year=y;
    }
    void printDate() const{
        cout << m_month << " - " << m_day << " - " << m_year <<endl;

    }
    DateType(){
        m_month=0;
        m_day=0;
        m_year=0;
    }
    DateType(int m, int d, int y){
        setDate(m,d,y);
    }
};

class personInfoType{
private:
    personType m_name;
    DateType m_date;
    int m_personID;
public:
    personInfoType(const string &first, const string &last, int  month, int day, int year, int ID):m_name(first, last),m_date(month, day, year), m_personID(ID){}
    void setPersonalInfo(const personType &name, const DateType &date, int ID){
       m_name.setFirstName(first);
       m_name.setLastName(last);
       m_date.setDate(month,day,year);
       m_personID=ID;
    }

    void printPersonalInfo() const{
        cout << "First Name is :: " << m_name.getFirstName()<< " last Name " << m_name.getLastName() << endl;
    }



};

int main(){
    return 0;
}