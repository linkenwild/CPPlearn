//Essential CPP Ch2_Ex5
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename Type>
inline Type max_( Type t1, Type t2 )
{
	return t1 > t2 ? t1 : t2;
}

template <typename elemType>
inline elemType max_( const vector<elemType> &vec )
{
	return *max_element( vec.begin(), vec.end() );
}

template <typename arrayType>
inline arrayType max_( const arrayType *parray, int size )
{
	return *max_element( parray, parray+size );
}

void ex2_5() 
{
    string sarray[]={ "weeree","her","weere", "priidede", "of", "teeen" };
    vector<string> svec( sarray, sarray+6 );

    int iarray[]={ 12, 70, 2, 169, 1, 5, 29 };
    vector<int> ivec( iarray, iarray+7 );

    float farray[]={ 2.5, 24.8, 18.7, 4.1, 23.9 };
    vector<float> fvec( farray, farray+5 );

    int imax = max_( max_( ivec ), max_( iarray, 7 ));
    float fmax = max_( max_( fvec ), max_( farray, 5 ));
    string smax = max_( max_( svec ), max_( sarray, 6 ));

	cout << "imax should be 169  -- found: " << imax << "\n"
	     << "fmax should be 24.8 -- found: " << fmax << "\n"
		 << "smax should be were -- found: " << smax << "\n";
}

int main()
{
	ex2_5();
}