/*
sum the numbers from 1 to 100.

Display the answer using the Gauss formula n(n+1)/2
Display the answer using a loop.  Verify that both answers are the same.
*/
#include <iostream>
using namespace std;
int main()
{
	int n=100;
	int sum1 = 0, sum2 = 0;
	
	for(int ix= 1; ix <= 100; ++ix)
		sum2 += ix;
	sum1 = n*(n+1)/2;
	cout << sum1 << '\t' << sum2 << endl;
	if(sum1==sum2)
		cout << "great, they are the same!";
	
	return 0;
}