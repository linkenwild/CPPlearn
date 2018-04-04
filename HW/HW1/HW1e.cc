 /*Read in n from keyboard.

cin >> n; // we did not cover in class, but this will do it!

	Compute n!  (n factorial)

	example n=3   3! = 3 * 2 * 1 = 6


	try for n=10 3628800
	n=20 ???
	n=30
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	int s=1;
	cout << "Please enter a number: " << endl;
	cin >> n;
				 
		if ( n < 0)
			cerr << "invalid number: " << n
				 << " -- cannot handle request!\n";
		else if ( n==0 || n==1 )
		{
			cout <<"n! = 1\n";
		}
		else
		{
			for(int ix=1; ix<=n; ++ix)
			{
				s *=ix;
			}
			cout <<"n! = " << s;
		}
		
		return 0;
}