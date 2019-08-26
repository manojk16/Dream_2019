/*
 * 8_c++11_initializer_list.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 */

// When a C++11 compiler sees an initializer list, it automatically converts it into an object of type std::initializer_list.
//Therefore, if we create a constructor that takes a std::initializer_list parameter, we can create objects using the initializer list as an input.

//std::initializer_list lives in the <initializer_list> header.
/*
There are a few things to know about std::initializer_list. Much like std::array or std::vector, you have to tell std::initializer_list what type of data
the list holds using angled brackets. Therefore, you’ll never see a plain std::initializer_list. Instead, you’ll see something like
std::initializer_list<int> or std::initializer_list<std::string>.
*/

