//Pentagonal 
//Tande
#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

extern bool fibon_elem(int, int&);
extern bool calc_elements( vector<int> &vec, int pos);
extern void really_calc_elems( vector<int> &vec, int pos );
extern bool pentagonal_elem( int po, int &elem );
extern const vector<int>* pentagonal_series(int pos);
extern void display_elem(vector<int>&, const string&, ostream& = cout);

inline bool check_validity( int pos )
{
	return ( pos<= 0 || pos > 64 ) ? false : true;
}

inline bool calc_elems( vector<int> &vec, int pos )
{
	if ( pos <=0 || pos > 64)
	{
		cerr << "Sorry. Invalid position: " << pos << endl;
		return false;
	}
	
	if (vec.size() < pos)
		really_calc_elems(vec, pos);
	
	return true;
}

template <template Type>
inline Type max( Type t1, Type t2 )
{
	return t1 > t2 ? t1 : t2;
}

template <typename elemType>
inline elemType max( const vector<elemType> &vec )
{
	return *max_element( vec.begin(), vec.end() );
}

template <typename arrayType>
inline arrayType max( const arrayType *parray, int size )
{
	return *max_element( parray, parray+size) ;
}













