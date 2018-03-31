//test2 q4
#include <iostream>
using namespace std;

class A
{
private:
	int x;
public:
	A(int x) : x(x) { cout << "F"; }
	A() : x(2) { cout << "R"; }
	void f() { cout << "Q"; }
	~A() { cout << "T"; }
};

class B : public A
{
public: 
	B(int x) : A(x) { cout << x;}
	B() : A(4) { cout << 'x'; }
	~B() { cout << "S"; }
};

int main()
{
	for (int i =5; i > 0; i -= 3)
	{
		A a1;
		a1.f();
		B b1(i);
	}
}