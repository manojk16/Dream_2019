//
// Created by redbend on 04/09/2019.
//

#include <iostream>


using namespace std;

// Class product defines the interface for the object that Factory creates :

class Product{
public:
    virtual ~ Product()= default;
    virtual string getName() = 0;
};
// ConcreteProduct Implements to the Product

class ConcreteProductA:public Product{
public:
    string getName()override{
        return "A";
    }
    ~ConcreteProductA(){}
};
class ConcreteProductB : public Product {
public:
    string getName() override {
        return "B";
    }
};
//Creator (also called as Factory because it creates the Product objects) declares the method Factory Method, which returns a Product object. May call the generating
//method for creating Product objects.
class Factory{
public:
virtual ~Factory()=default;
virtual Product* createProductA()=0;
virtual Product* createProductB()=0;
virtual void removeProduct(Product *product)=0;

};

class FactoryConcrete:public Factory{
    public:
    ~FactoryConcrete()= default;
    Product* createProductA(){
        return new ConcreteProductA();
    }

    Product* createProductB(){
        return new ConcreteProductB();
    }
    void removeProduct(Product *product){
        cout << "Product " << product->getName() << " deleted" <<endl;
        delete product;
    }
};

int main(){
    Factory *factory = new FactoryConcrete();
    Product *p1= factory->createProductA();
    cout << "Product " << p1->getName() << endl;
    factory->removeProduct(p1);

    Product *p2= factory->createProductB();
    cout << "Product " << p2->getName() <<endl;
    factory->removeProduct(p2);
}