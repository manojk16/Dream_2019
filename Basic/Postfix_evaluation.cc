/*
 * Postfix_evaluation.cc
 *
 *  Created on: Jul 26, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;
int  EvaluatePostfix(string expression);
bool isNumericdigit(char c);
bool isoperator(char c);
int PerformOperation(char operation, int operand1, int operand2);

int main(){
	string expression;
	cout<<"Enter The postfix expression"<<"\n";
	getline(cin,expression);
	int result=EvaluatePostfix(expression);
	cout<<"After Evaluation result is "<< result <<endl;
	return 0;
}

int EvaluatePostfix(string expression){
	stack<int> S;
	for(int i=0;i<expression.length();i++){
		if(expression[i]==' ' || expression[i]==',') continue;
		else if(isoperator(expression[i])){

			int op2=S.top(); S.pop();
			int op1=S.top();S.pop();
			int result=PerformOperation(expression[i],op1,op2);
			S.push(result);
		}
		else if(isNumericdigit(expression[i])){
			int operand=0;
			while(i<expression.length() && isNumericdigit(expression[i])){

				operand=operand*10+expression[i]-'0';
				i++;
			}
			i--;
			S.push(operand);
		}

		}
	return S.top();

	}

bool isNumericdigit(char c){
	if(c >= '0' && c <= '9'){
		return true;
	}
	return false;
}

bool isoperator(char c){
	if(c == '+' || c=='-' || c=='*' || c=='/' ){
		return true;
	}
	return false;
}

int PerformOperation(char operation, int operand1, int operand2){
	if(operation=='+') return operand1+operand2;
	else if(operation=='-') return operand1-operand2;
	else if(operation=='*') return operand1*operand2;
	else if(operation=='/') return operand1/operand2;
	else
		cout <<" Unexpected Error " <<"\n";
	return -1;
}
