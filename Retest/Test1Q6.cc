#include <iostream>
using namespace std;

int sum(int a[], int first , int last)
{
	int s=0;
	for(int i=first; i<=last ; ++i)
		s += a[i];
	return s;
}



int main()
{
	int a[]= {1,2,3,4,5,6,7};
	cout << sum (a,3,5) << "\n";
}
