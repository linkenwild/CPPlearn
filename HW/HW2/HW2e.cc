/*Implement the following 4 functions:
For parts 1-4 of this assignment, make sure you can support up to n=30.
1. fact(n) computes n factorial using a loop.
2. fact2(n) computes n factorial using recursion
3. fibo(n) computes the nth fibonacci number using a loop where 
the sequence is 1, 1, 2, 3, 5, 8, 13, ...
and n=1 is the first number in the sequence.  Thus fibo(6)=8
4. fibo2(n) using recursion.
5. choose(n,r) = n!/(r!(n-r)!)  You should be able to support 
choose(52,6), the number of ways to play the NY lottery.*/
#include <iostream>
using namespace std;

long double fact(int n)
{
	long double sum=1;
	for (int ix=1; ix<=n; ++ix)
		sum *= ix;
	return sum;
}

long double fact2(int n)
{
	long double sum=1;
	if(n==1||n==0)
		sum=1;
	else
	sum = fact2(n-1)*n;
	return sum;
}

long double fibo(int n)
{
	long double elem=1;
	long double e_1 =1, e_2=1;
	if (n==1||n==2)
		elem = 1;
	else 
		for (int i=2; i<n ; ++i)
		{
			elem = e_1 + e_2;
			e_2= e_1;
			e_1= elem;
		}
	return elem;
}

long double fibo2(int n)
{
	long double elem=1;
	if (n==1||n==2)
		elem = 1;
	else 
		elem = fibo2(n-1)+ fibo2(n-2);
	return elem;
}	

long double choose (int n, int r)
{
	//choose(n,r) = n!/(r!(n-r)!)
	long double s=0;
	s = fact(n)/(fact(r)*fact(n-r));
	return s;
}

int main() {
  cout << fact(5) << ' ' << fact2(5) << '\n';
  cout << fact(15) << ' ' << fact2(15) << '\n';
  cout << fibo(5)<< ' ' << fibo2(5) << '\n';
  cout << fibo(13) << ' ' << fibo2(13) << '\n';
  cout << choose(52,6) << '\n';
}
	
