/*
 * 7_Quiz_time_1.cc
 *
 *  Created on: Aug 7, 2019
 *      Author: user1
 */

#include <iostream>
#include <cassert>

using namespace std;



class Fraction{
	int m_numerator;
	int m_denominator;
public:
	Fraction(int num, int den):m_numerator(num),m_denominator(den){}
	void print() const{
		assert(m_denominator!=0);
		cout << m_numerator << "/" << m_denominator <<endl;
	}
	static int gcd(int a, int b) {
	    return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
	}
	void reduce(){
		int gcd=Fraction::gcd(m_numerator,m_denominator);
		m_numerator /= gcd;
		m_denominator /= gcd;

	}
	friend Fraction operator*(int value,const Fraction& rhs);
	friend Fraction operator*(const Fraction& lhs,int value);
	friend Fraction operator*(const Fraction& lhs, const Fraction& rhs);
};
Fraction operator*(const Fraction& lhs, const Fraction& rhs){
	int nume=lhs.m_numerator*rhs.m_numerator;
	int deno=lhs.m_denominator*rhs.m_denominator;
	return Fraction(nume,deno);


}
Fraction operator*(int value,const Fraction& rhs){
	int nume=rhs.m_numerator*value;
	int demo=rhs.m_denominator;
		return Fraction(nume,demo);

}
Fraction operator*(const Fraction& lhs, int value)
{
	int nume = lhs.m_numerator * value;
	int demo = lhs.m_denominator;
	return Fraction(nume, demo);


}

int main()
{
	/*Fraction f1(2, 5);
	f1.print();

	Fraction f2(3, 8);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();

	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();*/
	Fraction f1(2, 5);
	f1.print();

	Fraction f2(3, 8);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();

	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();
    return 0;
}
