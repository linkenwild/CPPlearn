/*Using the NOAA windchill table in the provided URL, generate a 
duplicate table.
This is a test of your ability to use nested loops, implement the equation in
C++. Don't forget to use the math function pow(x,y) in the 
library to compute the power.
http://www.nws.noaa.gov/om/cold/wind_chill.shtml 
(Links to an external site.)Links to an external site.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float windchill;
	float V,T,P;
	int F;
	
	
	for (int i=0; i <18; ++i)
	{
		F= 40-5*i;
		cout << '\t'<< F;
	}
	cout << '\n';
	
	for(int j=1; j <=12; ++j)
	{
		V=5*j;
		cout << V <<'\t';
		for (int i=0; i<18; ++i)
		{
			T=40-5*i;
			P=pow(V,0.16);
			windchill= 35.74+0.6215*T-35.75*P+0.4275*T*P;
			if (windchill >=-0.5)
			cout << int(windchill + 0.5)<<"\t";
			else if (windchill <-0.5)
			cout << -int(-windchill +0.5)<<"\t";
        }
        cout << '\n';
	}
}
	