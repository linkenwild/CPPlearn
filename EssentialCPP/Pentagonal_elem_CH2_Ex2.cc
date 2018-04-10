//Pentagonal 
//Tande
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//extern bool fibon_elem(int, int&);
//extern bool calc_elements( vector<int> &vec, int pos);
//extern void really_calc_elems( vector<int> &vec, int pos );
//extern bool pentagonal_elem( int po, int &elem );
//extern const vector<int>* pentagonal_series(int pos);
//extern void display_elems(vector<int>&, const string&, ostream& = cout);
/*
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
*/

/*
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
*/
/*
bool fibon_elem( int pos, int &elem )
{
	if (pos <= 0 || pos > 1024)
	{
		elem = 0;
		return false;
	}
	
	elem = 1;
	int n_2= 1, n_1 =1;
	for int (ix =3; ix<= pos ; ++ix)
	{
		elem = n_2 + n_1;
		n_2 = n_1;
		n_1 = elem;
	}
	return true;
}
*/

bool calc_elements( vector<int>& vec, int pos )
{
	if ( pos <= 0 || pos > 64 )
	{
		cerr << "Sorry. Invalid position: "
			 << pos << endl;
		return false ;
	}
	
	for (int ix = vec.size() +1; ix <= pos; ++ix)
	{
		vec.push_back( (ix*(3*ix-1)/2 ) );
	}
	
	return true;
}

void display_elems( vector<int> &vec, const string &title )
{
	cout << '\n' << title << "\n\t";
	for ( int ix=0; ix < vec.size(); ++ix )
		cout << vec[ix] << ' ';
	cout << endl;
}

/*
void really_calc_elems( vector<int> &vec, int pos )
{
	for ( int ix = vec.size()+1; ix <= pos; ++ix)
	{
		cout << "ix : " << ix << " == " << (ix*(3*ix-1))/2 << endl;
		vec.push_back( (ix*(3*ix-1))/2 );
	}
}
*/

/*
bool pentagonal_elem( int pos, int &elem )
{
	if ( ! check_validity( pos )) 
	{
		cout << "Sorry. Invalid position: " << pos << endl;
		elem = 0;
		return false;
	}
	
	const vector<int> *pent = pentagonal_series( pos );
	elem = (*pent)[pos-1];
	return true;
}

const vector<int>*
pentagonal_series( int pos )
{
	static vector<int> _elems;
	if ( check_validity( pos ) && ( pos > _elems.size() ))
	{
		for ( int ix = _elems.size()+1; ix <= pos; ++ix)
		{
			_elems.push_back( (ix*(3*ix-1))/2 );
		}
	}
	return &_elems;
}
*/

void ex2_2()
{
    vector<int> pent;
    const string title( "Pentagonal Numeric Series" );

    if ( calc_elements( pent, 0 ))
         display_elems( pent, title );

    if ( calc_elements( pent, 8 ))
         display_elems( pent, title );

    if ( calc_elements( pent, 14 ))
         display_elems( pent, title );

	if ( calc_elements( pent, 138 ))
         display_elems( pent, title );
}

int main()
{
    //ex2_1();
	 ex2_2();
    // ex2_3();
	// ex2_4();
	// ex2_5();
}
	
	







