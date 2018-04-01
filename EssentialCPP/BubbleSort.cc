//bubble sort by Tande Chen
// using reference &&&
#include <iostream>
#include <vector>
using namespace std;

void swap(int& val1, int& val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
}

void bubble_sort( vector<int> &vec)
{
	for ( int ix =0; ix < vec.size(); ++ix)
		for ( int jx = ix + 1; jx < vec.size(); ++jx)
			if ( vec[ix] > vec[jx])
				swap( vec[ix], vec[jx]);
}

void display( vector<int> vec)
{
	for (int ix=0; ix < vec.size(); ++ix)
		cout << vec[ix]<< ' ';
	cout << endl;
}


int main()
{
	int ia[8]= { 3, 6, 7, 12, 5, 35, 2, 4};
	vector<int> vec(ia , ia+8);
	
	cout << "Before bubble sort, the vecotr is: \n";
	display( vec );
	cout << "After bubble sort, the vector is: \n";
	bubble_sort(vec);
	display( vec );
	return 0;
}