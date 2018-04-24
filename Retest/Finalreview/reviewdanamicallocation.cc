//review danamical location
//from 
//https://github.com/StevensDeptECE/EE553-CPP/blob/master/session11/01reviewdynamicallocation.cc
#include <iostream>
#include <cstdlib>
using namespace std; 

int main()
{
	int a = 2;
	int *p = &a;
	cout << a << endl;
	cout << *p << endl;
	
	int *q = new int[1024];
	
	delete [] q;
	
	int* r = (int*)malloc(1024*sizeof(int));
	free(r);
}
	
	