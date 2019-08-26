/*
 * 3_Enumerated_Class.cc
 *
 *  Created on: Jul 30, 2019
 *      Author: user1
 *
 *
 *
 *      C++11 defines a new concept, the enum class (also called a scoped enumeration), which makes enumerations
 *       both strongly typed and strongly scoped. To make an enum class, we use the keyword class after the enum keyword.
 *       Here’s an example
 */

/*
int main()
{
    enum Color
    {
        RED, // RED is placed in the same scope as Color
        BLUE
    };

    enum Fruit
    {
        BANANA, // BANANA is placed in the same scope as Fruit
        APPLE
    };

    Color color = RED; // Color and RED can be accessed in the same scope (no prefix needed)
    Fruit fruit = BANANA; // Fruit and BANANA can be accessed in the same scope (no prefix needed)

    if (color == fruit) // The compiler will compare a and b as integers
        std::cout << "color and fruit are equal\n"; // and find they are equal!
    else
        std::cout << "color and fruit are not equal\n";

    return 0;
}
When C++ compares color and fruit, it implicitly converts color and fruit to integers,
and compares the integers. Since color and fruit have both been set to enumerators that evaluate to value 0,
this means that in the above example, color will equal fruit. This is definitely not as desired since color and
fruit are from different enumerations and are not intended to be comparable! With standard enumerators,
there’s no way to prevent comparing enumerators from different enumerations.
*/
#include <iostream>

using namespace std;


int main(){
	enum class COLOR{
		RED,
		BLUE,

	};

	enum class FRUIT{
		APPLE,
		BANANA,
	};


	COLOR color=COLOR::RED;
	FRUIT fruit=FRUIT::BANANA;
	/*if(COLOR::RED==FRUIT::BANANA){
		cout << "color and Fruit are equal\n";
	}else{
		cout << "Color and fruits are not equal \n";
	}*/
	if(color==COLOR::RED){
		cout<< "Color is red " << "\n";
	}else{
		cout << "Color is not red \n";
	}

	return 0;
}






