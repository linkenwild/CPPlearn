#include <iostream>
using namespace std;

int fact(int x)
{	
	int S = 1;
	for (int i=1; i<=x; ++i)
		S *= i;
	return S;
}

int fact2(int x)
{
	int S=1;
	if(x>1)
		S = x * fact2(x-1);

	return S;
}

int main()
{
	cout << fact(6)<< '\n';
	cout << fact2(3) << '\n';
}
