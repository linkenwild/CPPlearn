/*Write the following  function called isPrime that returns true if
the number is prime, and false if it is not.
bool isPrime(unsigned long long p) { ... }
Your program should enter in a number and print prime or not prime.*/

#include <iostream>
using namespace std;

bool isPrime(unsigned long long p)
{
	
	if( p<2 )
	return false;
			 
	else 
		for (unsigned long long ix=2; ix < p; ++ix)
		if (p%ix==0)
			return false ;
		return true;
}

int main()
{	unsigned long long p;
	cout << "please enter a number: " << endl;
	cin >> p;
	if(isPrime(p))
		cout << p << " is a prime number.";
	else 
		cout << p << " is not a prime number.";
	return 0;
}
			