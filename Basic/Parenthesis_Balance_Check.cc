/*
 * Parenthesis_Balance_Check.cc
 *
 *  Created on: Jul 20, 2019
 *      Author: user1
 */


#include <iostream>
#include <stack>
#include <string>
using namespace std;


// To check to opening and closing parenthesis is same
bool ispair(char opening , char closing){
	if(opening== '(' && closing ==')'){
		return true;
	} else if(opening== '{' && closing =='}'){
		return true;
	} else if(opening== '[' && closing ==']'){
		return true;
	}
	return false;
}
bool is_Parenthesis_Balanced(string exp){
	stack<char> s;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='('|| exp[i]=='{'||exp[i]=='['){
			s.push(exp[i]);
		}
		else if(exp[i]==')' || exp[i]=='}'|| exp[i]==']' ){

			if(s.empty() || !ispair(s.top(),exp[i])){
				return false;
			} else{
				s.pop();
			}
		}
	}
	return s.empty() ? true:false;
}

int main()
{
	/*Code to test the function AreParanthesesBalanced*/
	string expression;
	cout<<"Enter an expression:  "; // input expression from STDIN/Console
	cin>>expression;
	if(is_Parenthesis_Balanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}

