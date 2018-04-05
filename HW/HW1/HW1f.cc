/*Compute the sum 1/12 + 1/22 + 1/32 + .... 1/n2  
Use float to compute your answer.  Note that this will result 
in a maximum accuracy of 7 digits.
Figure out how many iterations you will need before the contribution 
of 1/n2 is too small and no longer matters.
Then, instead of printing this sum (which will be unrecognizable, some 
strange number around 1.64) print out the following expression:
sqrt(6*s)
where s is the sum.
In order to use the sqrt function you will have to #include <cmath>
You may recognize the number you get from this.  
But it will not be very accurate.
Now, try to make n bigger.  And compute the answer backwards as well.  
The output of your program should be:
cout << sqrt(6 * s1) << '\n';
cout << sqrt(6 * s2) << '\n';
where s1 and s2 are the sums computed forward and backward.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float n=1;
	float s=0, old=-1;
	for ( float in =1; s > old ; ++in)
	{
		old = s;
		s = s + (1/(in*in));
		n=in;
	}
	cout << n<< '\t' << s << '\t' << sqrt(6*s) << endl;
	float s1=0,s2=0;
	for (float ix =1; ix < n-5; ++ix)
	{
		s1 = s1+(1/(ix*ix));
	}
	cout << '\t' << s1<< '\t' << "When n-5:\t"<< sqrt(6*s1)<< endl;
	
	for (float ij =1; ij < n+5; ++ij)
	{
		s2 = s2+(1/(ij*ij));
	}
	cout << '\t' << s2<< '\t' << "When n-5:\t"<< sqrt(6*s2)<< endl;
	
	return 0;
	
}