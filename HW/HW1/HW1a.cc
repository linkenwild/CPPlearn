//HW1a
//read in a number from keyboard (suppose n = 5)
//
//	if it's odd, multiply by 3 and add 1.
//	if it's even divide by 2.
//
//	Repeat until the number converges to 1
//	5	16	8	4	2	1
#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter a number: " << endl;
	int n;
	cin >> n;
	cout << n<< '\t';
	
	
				 
	do
	{
		if ( n <= 0)
			cerr << "invalid number: " << n
				 << " -- cannot handle request!\n";
		else if ( n >0 &&!(n%2) )
		{
			n = n/2;
			cout << n << '\t';
		}
		else if ( n> 0 && (n%2) )
		{
			n = 3*n +1;
			cout << n << '\t';
		}
		
	}while (n>1);
	
	return 0;
}
