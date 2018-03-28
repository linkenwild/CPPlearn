#include <iostream>
 using namespace std;
 
 double enterGrades (int ia[256], double& mean)
 {
 	
 	int n=0,ival=0, icnt =0;
	cout << "please enter N\n";
 	cin >> n;
	cout << "please enter Grades\n";

 	while (cin>> ival && icnt < n)
 		ia [icnt++] = ival;

 	int sum =0;
 	for (int ix =0; ix < n; ++ix)
 		sum += ia[ix];
 	 mean = sum/n;
	 //cout << "\nAvarage is "<< mean<< endl;
 	return mean;
 }
 
 int main()
 {	
 	int grades[256];
 	double mean;
 	enterGrades(grades, mean);

	cout << "average = " << mean << '\n';
	return 0;
 }
 