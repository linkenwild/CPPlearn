//test3 practice
class A
{
public:
	virtual void f() = 0;
};

class B : public A
{
public:
	B(int x) { cout << 'B'; }
	~B() { cout << "~B"; }
	void f(){ cout << "f"; }
};

class C : public B
{
public:
	C(int x, int y):B(x){cout<<y;}
	~C(){cout<<"~C";}
	void f() { cout <<"g"; }
};

void f()
{
}






#include <iostream>
using namespace std;

class List{
private:
	int* list;
	int used;
	int capacity;
public:
	List(int initialSize)
