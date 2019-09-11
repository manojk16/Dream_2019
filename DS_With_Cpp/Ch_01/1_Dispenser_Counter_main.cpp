/*
 * 1_Basic_main.cpp
 *
 *  Created on: Aug 29, 2019
 *      Author: user1
 */
#include <iostream>
#include "cashRegister.h"
#include "dispenserType.h"

using namespace std;

void showSelection();
void sellProduct(dispenserType& product, cashRegister& pCounter);


/*************Question ************************************************************/
/*
When the program executes, it must do the following:
1. Show the different products sold by the juice machine.
2. Show how to select a particular product.
3. Show how to terminate the program.
Furthermore, these instructions must be displayed after processing each selection
(except exiting the program), so that the user need not remember what to do if he
or she wants to buy two or more items. Once the user has made the appropriate
selection, the juice machine must act accordingly. If the user has opted to buy a product
and if that product is available, the juice machine should show the cost of the product
and ask the user to deposit the money. If the amount deposited is at least the cost of the
item, the juice machine should sell the item and display an appropriate message.


This discussion translates into the following algorithm:
1. Show the selection to the customer.
2. Get the selection.
3. If the selection is valid and the dispenser corresponding to the
selection is not empty, sell the product.



*/

void showSelection(){
	cout << "*** Welcome to Shelly's Fruit Juice Shop ***" << endl;
	cout << "To select an item, enter " << endl;
	cout << "1 for apple juice" << endl;
	cout << "2 for orange juice" << endl;
	cout << "3 for mango lassi" << endl;
	cout << "4 for fruit punch" << endl;
	cout << "9 to exit" << endl;
}

void sellProduct(dispenserType &product, cashRegister &pCounter){
	int amount; // Variable to hold the amount entered
	int amount2; // varaible to hold the extraamount needed
	if(product.getNumberofItem() > 0){
		cout << "Please Deposit " << product.getCost() << " Cents " << endl;

	 cin >> amount;

	if(amount < product.getCost()){
		cout << "Please Enter another " << product.getCost() - amount << "Cents" <<endl;
		cin >> amount2;
		amount=amount+amount2;
	}
	else if(amount==product.getCost()){
		pCounter.acceptAmount(amount);
		product.makeSale();
		cout << "Collect your item and Enjoy " << endl;

	}
	else if(amount > product.getCost()){
		pCounter.acceptAmount(amount);
		product.makeSale();
		cout << "Please Collect your item and Remaining Balance " << amount - product.getCost() << " From the Below Box " <<endl;

	} else{
		cout << "Amount is not enough Collect What You deposited " <<endl;
	}
	} else{
		cout << "Sorry This Item Sold Out " << endl;
	}

}

int main(){
	cashRegister counter;
	dispenserType mangoLassi(75,45);
	dispenserType appleJuice(50,100);
	dispenserType OrangeJuice(100,40);
	dispenserType FruitPunch(100,85);
	int choice; // Varaible to Hold The Selection

	showSelection();
	cin >> choice;

	while(choice!=9){
		switch(choice){
		case 1:
			sellProduct(appleJuice,counter);
			break;
		case 2:
			sellProduct(OrangeJuice,counter);
			break;
		case 3:
			sellProduct(mangoLassi,counter);
			break;
		case 4:
			sellProduct(FruitPunch,counter);
			break;
		default:
			cout << "Invalid Selection \n";
		}
		showSelection();
		cin >> choice;

	}
	return 0;
}
