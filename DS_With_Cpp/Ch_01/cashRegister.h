/*
 * Counter.h
 *
 *  Created on: Aug 30, 2019
 *      Author: user1
 */

class cashRegister{
private:
	int m_cashOnhand;
public:
	int getCurrentBalance() const;
	void acceptAmount(int amount);
	cashRegister();
	cashRegister(int cash);

};

int cashRegister::getCurrentBalance()const{
	return m_cashOnhand;
}
void cashRegister::acceptAmount(int amount){
m_cashOnhand+=amount;
}

cashRegister::cashRegister(){
	m_cashOnhand=500;
}
cashRegister::cashRegister(int amountIn){
	if(m_cashOnhand >=0){
		m_cashOnhand=amountIn;
	}else{
		m_cashOnhand=500;
	}
}



