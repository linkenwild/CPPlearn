//test 2 Q 3
// Tande Chen
#include <iostream>
using namespace std;

class hierarchy
{
private:
	int x1,y1,x2,y2;
public:
	hierarchy (){}
	virtual void draw()=0;
	virtual double area()=0;
	
};

class Line : public hierarchy
{
private:
	int x1,y1,x2,y2;
public:	
	Line(int x1=0, int y1=0, int x2=0, int y2=0): x1(x1), y1(y1), x2(x2), y2(y2){}

	void draw()
	{
		cout << "0 0 move to " << x1 << ' ' << y1 
			 << " line to " << x2 << ' ' << y2 << endl;
	}
	double area()
	{	
		cout << " area of a line is zero";
		return 0;
	}
};

class Circle : public hierarchy
{
private: 
	int x, y; double r;
public: 
	Circle(int x=0, int y=0, double r=0): x(x), y(y), r(r){}
	
	void draw()
	{
		cout << x << ' ' << y << ' '
			 << r << " 0 360 arc stroke \n";
			 
	}
	
	double area()
	{	
		return 3.14*r*r;
	}
	
};

int main()
{	
	Line line1(0,0,100,100);
	Circle c1(200,200,50);
	line1.draw();
	c1.draw();
	cout << c1.area() << '\n';
}
	