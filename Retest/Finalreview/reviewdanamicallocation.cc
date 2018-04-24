//review danamical location
#include <cstdlib>

int main()
{
	int a = 2;
	int *p = &a;
	cout << a << endl;
	cout << *p << endl;
	
	int *q = new int[1024];
	
	delete [] q;
	
	int *r = malloc(1024*sizeof(int));
	free(r)
}
	
	