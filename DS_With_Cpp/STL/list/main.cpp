#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    list<int> list1,list2;
    ostream_iterator<int> out(cout, ",");
    list1.push_back(23);
    list1.push_back(58);
    list1.push_back(58);
    list1.push_back(36);
    list1.push_back(15);
    list1.push_back(98);
    list1.push_back(58);
    copy(list1.begin(),list1.end(),out);
    cout<<endl;
    list2=list1;
    copy(list2.begin(),list2.end(),out);
    cout<<endl;
    list1.unique();
    cout << "After Removing consecutive Duplicates from List1"<<endl;
    copy(list1.begin(),list1.end(),out);
    cout<<endl;
    list2.sort();
    cout << "After Sorting List 2" <<endl;
    copy(list2.begin(),list2.end(),out);
    cout<<endl;
    return 0;
}