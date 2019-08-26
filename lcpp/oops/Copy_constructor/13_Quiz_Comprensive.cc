/*
 * 13_Quiz_Comprensive.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 *
 *
 *     1.  If you’re overloading assignment (=), subscript ([]), function call (()), or member selection (->), do so as a member function
 *     2. If you’re overloading a unary operator, do so as a member function.
 *     3.If you’re overloading a binary operator that modifies its left operand (e.g. operator+=), do so as a member function if you can
 *     4. If you’re overloading a binary operator that does not modify its left operand (e.g. operator+), do so as a normal function or friend function.
 *     5. Typecasts can be overloaded to provide conversion functions, which can be used to explicitly or implicitly convert your class into another type.
 *
 *
 *     1) Assuming Point is a class and point is an instance of that class, should you use a normal/friend or member function overload for the following operators?

		1a) point + point Friend Function/ Member Function
		1b) -point member Function
		1c) std::cout << point friend Function/Normal Function
		1d) point = 5; Member function
 *
 *
 *2) Write a class named Average that will keep track of the average of all integers passed to it. Use two members: The first one should be type int32_t,
 * and used to keep track of the sum
  of all the numbers you’ve seen so far.
 * The second should be of type int8_t, and used to keep track of how many numbers you’ve seen so far. You can divide them to find your average.
 */



#include <iostream>
#include <cassert>
#include <string>
#include <cstring>
#include <cstdint> // for fixed width integers
using namespace std;


class Average{
	int_least32_t m_total=0;
	int_least32_t m_numbers=0 ;
public:
	Average(){}
	friend ostream& operator<<(ostream &out, const Average &average)
	{
		// Our average is the sum of the numbers we've seen divided by the count of the numbers we've seen
		// We need to remember to do a floating point division here, not an integer division
		out << static_cast<double>(average.m_total) / average.m_numbers;

		return out;
	}

	// Because operator+= modifies its left operand, we'll write it as a member

	Average& operator+=(int num)
		{
			// Increment our total by the new number
			m_total += num;
			// And increase the count by 1
			++m_numbers;

			// return *this in case someone wants to chain +='s together
			return *this;
		}
};

int main(){

	Average avg;

	avg += 4;
	std::cout << avg << '\n';

	avg += 8;
	std::cout << avg << '\n';

	avg += 24;
	std::cout << avg << '\n';

	avg += -10;
	std::cout << avg << '\n';

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n';

	Average copy = avg;
	std::cout << copy << '\n';

	return 0;
}
/*
class Average
{
private:
	std::int_least32_t m_total = 0; // the sum of all numbers we've seen so far
	std::int_least8_t m_numbers = 0; // the count of numbers we've seen so far

public:
	Average()
	{
	}



	// Because operator+= modifies its left operand, we'll write it as a member
	Average& operator+=(int num)
	{
		// Increment our total by the new number
		m_total += num;
		// And increase the count by 1
		++m_numbers;

		// return *this in case someone wants to chain +='s together
		return *this;
	}
};

int main()
{
	Average avg;

	avg += 4;
	std::cout << avg << '\n';

	avg += 8;
	std::cout << avg << '\n';

	avg += 24;
	std::cout << avg << '\n';

	avg += -10;
	std::cout << avg << '\n';

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n';

	Average copy = avg;
	std::cout << copy << '\n';

	return 0;
}
*/
