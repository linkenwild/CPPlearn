/*
Using the function you wrote in the previous program, write another 
function that returns the count of how many primes are in the range 
[a,b] inclusive.
int countPrimes(unsigned long long a, unsigned long long b) { ...}
The main program should read in two numbers, and print out the result
from this function.
For example, if I type:
1 10
there are 2,3,5,7 = 4 primes between 1 and 10 so the output should be:
4
The range is inclusive, so if I type
11 17
the output should be:
3
*/
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

int countPrimes(unsigned long long a, unsigned long long b)
{
	int count=0;
	for (unsigned long long ix=a; ix < b; ++ix)
	{
		if (isPrime(ix))
			++count;
	}
	return count;
}

int main()
{
	unsigned long long a,b;
	
	cout <<"please enter [a,b] number a: "<< endl;
	cin >> a;
	cout <<"please enter [a,b] number b: "<< endl;
	cin >> b;
	
	cout <<"between a and b, there are "  <<countPrimes(a,b)
		 <<" prime numbers.";
	
	return 0;
	
}