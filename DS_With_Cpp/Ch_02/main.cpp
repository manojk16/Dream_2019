#include <iostream>
using namespace std;


class rectangleType{
private:
    double width;
    double length;
public:
    double getWidth() const {
        return width;
    }

    void setWidth(double width) {
        rectangleType::width = width;
    }

    double getLength() const {
        return length;
    }

    void setLength(double length) {
        rectangleType::length = length;
    }
    double area() const{
        return length*width;
    }
    double perimeter()const{
        return 2*(length+width);
    }
    void setDimension(double l, double w){
        if(l>=0){
            length=l;
        }else{
            length=0;
        }
        if(w>=0){
            width=w;
        }else{
            width=0;
        }
    }
    rectangleType(){
        length=0;
        width=0;
    }
    rectangleType(double l, double w){
        setDimension(l,w);
    }
    void print() const{
        cout << " Length = " << length
              << " Width = " << width <<endl;

    }
};
class boxType:public rectangleType{
private:
    double height;
public:
    void setDimension(double l, double w, double h) {
        rectangleType::setDimension(l,w);
        if(h>=0){
            height=h;
        }else{
            height=0;
        }
    }
    double getHeight() const {
        return height;
    }
    void print() const{
        rectangleType::print();
        cout << " Height = " << height <<endl;
    }
    double area(){
        return 2 * (getLength() * getWidth()
             + getLength() * height
             + getWidth() * height);
    }
    double volume() const {
        return rectangleType::area()*height;
    }
    boxType(){
        height=0;
    }
    boxType(double l, double w, double h):rectangleType(l,w){
        if(h>=0){
            height=h;
        }else
            height=0;
    }

};

int main() {
    rectangleType myrectangle(5.0, 3.0);
    boxType mybox(6.0, 5.0, 4.0);
    myrectangle.print();
    cout << endl;
    mybox.print();
    cout << endl;
    return 0;
}
