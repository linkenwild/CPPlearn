#include <iostream>
using namespace std;

int f(int x) {return x*x;}

void g(int& x)
{
	cout << x;
	x += 3;
}

void h(int x)
{
	x -=4;
	cout << x;
}

int main()
{
	cout << f(3)<<'\n';
	int x=6;
	g(x);
	cout << x << '\n';
	for (int i=0; i<3; i++)
	{
		h(x);
	}
	
	cout << x << '\n';
}
