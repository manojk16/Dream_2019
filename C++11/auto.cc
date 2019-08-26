/*
 * auto.cc
 *
 *  Created on: Jul 30, 2019
 *      Author: user1
 *
 *      in c++11 auto key word introduced where We can use the auto keyword at the time of variable initializatio
 *      istead of the data type
 *      this is called type deduction or type inference
 *
 *
 */

// In c++11
auto x=5;
auto x=2.5;
// In c++

int func(int x, int y);//


// in c++ 14
auto func(int x, int y);

// Means auto keyword can't be used with function argument

// above feature to use the auto eyword with function return type further extended with c++ as below

auto func(int x, int y)->int;


auto print()->void;




