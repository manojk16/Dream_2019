/*
 * dispenserType.h
 *
 *  Created on: Aug 30, 2019
 *      Author: user1
 */

class dispenserType{
private:
	int m_no_of_items;
	int m_cost;
public:
	dispenserType():m_no_of_items(50),m_cost(50){}
	dispenserType(int item, int cost){
		if(item >=0){
			m_no_of_items=item;
		} else{
			m_no_of_items=50;
		}
		if(cost >=0){
			m_cost=cost;
		}else{
			m_cost=50;
		}
	}
	int getNumberofItem() const{
		return m_no_of_items;
	}
	int getCost() const{
		return m_cost;
	}
	void makeSale(){
		m_no_of_items--;
	}

};




