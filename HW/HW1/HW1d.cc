/* do this as float and as double

	sum1= 1/1 + 1/2 + ... + 1/100


	sum2= 1/100 + 1/99 + .... + 1/1

print out sum1
print out sum2
print out sum1 - sum2
*/
#include <iostream>
using namespace std;

int main()
{
	float	f_sum1,f_sum2;
	double	d_sum1,d_sum2;
	
	for ( float ix=1; ix <= 100; ++ix)
	{
		f_sum1 += (1/ix);
	}
	for ( float iy=100; iy >=1; --iy)
	{
		f_sum2 += (1/iy);
	}
	
	for ( double ix=1; ix <=100; ++ix)
	{
		d_sum1 += (1/ix);
	}
	for (double iy=100;iy >=1; --iy)
	{
		d_sum2 += (1/iy);
	}
	
	cout << f_sum1 << '\t' 
		 << f_sum2 << '\t'
		 << d_sum1 << '\t'
		 << d_sum2 << '\t';
		 
	return 0;
}