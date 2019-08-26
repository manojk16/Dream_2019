/*
 * 18_friend_function.cc
 *
 *  Created on: Aug 3, 2019
 *      Author: user1
 */

class Accumulaor{
	int m_value=0;
public:
	Accumulaor(){

	}

	void add(int value){
		m_value+=value;
	}
	friend void reset(Accumulaor& obj);
};

void reset(Accumulaor& accumulator){
	accumulator.m_value=0;
}

int main(){

	Accumulaor acc;
	acc.add(5);
	reset(acc);
	return 0;
}



