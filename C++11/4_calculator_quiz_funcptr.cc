/*
 * calculator_quix_funcptr.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 */
#include <iostream>
#include <functional>
using namespace std;

int add(int x, int y){
	return x+y;
}
int sub(int x, int y){
	return x-y;
}
int mul(int x, int y){
	return x*y;
}
int division(int x, int y){
	if(y!=0){
		return x/y;
	}else{
		return -1;
	}

}
typedef int (*arithmeticFcn)(int, int);
struct arithmeticStruct{
	char op;
	arithmeticFcn fcn;

};
// Non c++11 version
/*
static const arithmeticStruct  arithmeticArray[]={
	{'+',add},
	{'-',sub},
	{'*',mul},
	{'/',division}
};
*/

// c++ 11 Version
static const arithmeticStruct arithmeticArray[]{
	{'+',add},
	{'-',sub},
	{'*',mul},
	{'/',division}
};

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

char getOperation()
{
    char op;

    do
    {
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> op;
    }
    while (op!='+' && op!='-' && op!='*' && op!='/');

    return op;
}

/*arithmeticFcn getArithmeticFunction(char op){
	switch (op){
	default:
	case '+':return add;
	case '-':return sub;
	case '*':return mul;
	case '/':return division;
	}
}*/


arithmeticFcn getArithmeticFunction(char op){
	for(const auto &arith: arithmeticArray ){
		if(arith.op==op){
			return arith.fcn;
		}
		return add; //default is add;
	}
}


int main(){

	 int x = getInteger();
	 char op = getOperation();
	 int y = getInteger();

	 arithmeticFcn fcn=getArithmeticFunction(op);
	 cout << x <<" " << op << " " << y << " = " <<fcn(x,y) << "\n";

	/*function<int(int,int)> funcptr;
	//int (*funcptr)(int,int);
	int x, y;
	cout << "Enter the Two Number " << endl;
	cin >> x >> y;
	funcptr=add;
	cout << "Sum is " << funcptr(x,y)<<endl;
	funcptr=sub;
	cout << "sub is " << funcptr(x,y)<<endl;
	funcptr=mul;
	cout << "Mul is " << funcptr(x,y)<<endl;
	funcptr=division;
	cout << "div is " << funcptr(x,y)<<endl;

*/

	return 0;

}



