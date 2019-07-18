


//#include "link_list.h"
#include <stack>
#include <string>
#include <iostream>


// Reverser the string using STL stack  space and time complexity is O(n)
std::string Reverse_string(std::string str, int len){
	std::stack <char> s;
	//push character in to stack
	for(int i=0;i<len;i++){
		s.push(str[i]);
	}
	// pop out
	for(int i=0;i<len;i++){
		str[i]=s.top();
		s.pop();
	}
	return str;
}


// Reverse the string using Simple Method space and time complexity is O(n)
std:: string Reverse_sring_Normal(std::string str, int len){
	int i=0;
	int j=len-1;
	while(i<j){
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	return str;
}

int main(){
	//Node* head_ref=insert();
	//displayList(head_ref);
	std::string str;
	std::cout<<"Enter The String"<<"\n";
	std::cin>>str;
	std::string rstr=Reverse_string(str,str.length());
	std::cout<<"Reversed string is "<<"\n";
	std::cout<< rstr <<"\n";
	std::cout<<"Use the Normal method to reverse the string \n";
	std::string rnstr=Reverse_sring_Normal(rstr,rstr.length());
	std::cout<< rnstr <<"\n";
	return 0;
}
