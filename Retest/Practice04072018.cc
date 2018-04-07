//practice for test
#include <iostream>
using namespace std;

double enterGrades( int ia[256], double& mean)
{
	int n;
	int ival=0, icnt=0;
	cout << "please enter n: "<< endl;
	cin >> n;
	cout << "please enter grades: "<< endl;
	
	
	while ( cin >> ival && icnt < n)
		ia[icnt++] = ival;
	
	int sum =0;
	for (int ix =0; ix < n; ++ix)
		sum += ia[ix];
	
	mean = sum/n;
	
	return mean;
}

