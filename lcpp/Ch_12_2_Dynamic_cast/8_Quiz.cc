#include <iostream>
#include <vector>
using namespace std;

class Point
{
private:
	int m_x = 0;
	int m_y = 0;
	int m_z = 0;

public:
	Point(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	friend ostream& operator<<(ostream &out, const Point &p)
	{
		out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
		return out;
	}
};

/*class Shape
{
public:
	virtual std::ostream& print(std::ostream &out) const = 0;

	friend std::ostream& operator<<(std::ostream &out, const Shape &p)
	{
		return p.print(out);
	}
	virtual ~Shape() {}
};
*/
class Shape{
public:
	virtual ostream& print(ostream& out)const=0;
	friend ostream& operator <<(ostream& out, const Shape& rhs){
		return rhs.print(out);
	}
	virtual ~Shape(){}

};

class Triangle:public Shape{
private:
	Point m_x;
	Point m_y;
	Point m_z;
public:
	Triangle(const Point& x, const Point& y,const Point& z):m_x(x),m_y(y),m_z(z){}
	virtual ostream& print(ostream& out)const override{
			out << "Triangle("  << m_x << "," <<  m_y << " , "<<  m_z << " ) "<< endl;
			return out;
		}

};

class Circle:public Shape{
private:
	Point m_center;
	int m_radius;
public:
	Circle(const Point &center, int radius):m_center(center),m_radius(radius){}
	virtual ostream& print(ostream& out)const override{
		out << "Center point is " << m_center << "and Raidus is " << m_radius <<endl;
		return out;
	}
	int getRadius() const{
		return m_radius;
	}

};
int getLargestRadius(vector<Shape*> &v){
	int largestRadius{0};
	for(auto const &element:v){
		Circle *c=dynamic_cast<Circle*>(element);

		if(c && c->getRadius()> largestRadius){
			largestRadius=c->getRadius();
		}
	}
	return largestRadius;
}
int main()
{
   /* Circle c(Point(1, 2, 3), 7);
    cout << c << '\n';

    Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
    cout << t << '\n';*/
		vector<Shape*> v;
		v.push_back(new Circle(Point(1, 2, 3), 7));
		v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
		v.push_back(new Circle(Point(4, 5, 6), 3));

		// print each shape in vector v on its own line here
		for (auto const &element : v) // element will be a const reference to a Shape*
			cout << *element << '\n';

	    cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function

		// delete each element in the vector here
	    for(auto const &element : v){
	    	delete element;
	    }
    return 0;
}
