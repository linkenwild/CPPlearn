//essential cpp ch2 ex3 by tande chen
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

inline bool check_validity( int pos )
{
	return ( pos <= 0 || pos > 64 ) ? false : true;
}

inline bool calc_elems( vector<int> &vec, int pos )
{
 
   if ( vec.size() < pos )
   {
        for ( int ix = vec.size()+1; ix <= pos; ++ix )
		{
	      cout << "ix : " << ix << " == " << (ix*(3*ix-1))/2 << endl;
          vec.push_back( (ix*(3*ix-1))/2 );
		}
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

void ex2_3() 
{
    vector<int> pent;
    const string title( "Pentagonal Numeric Series" );

    if ( check_validity( 0 ) )
	{
		calc_elems( pent, 0 );
        display_elems( pent, title );
	}

    if ( check_validity( 8 ) )
	{
		calc_elems( pent, 8 );
        display_elems( pent, title );
	}

    if ( check_validity( 14 ) )
	{
		calc_elems( pent, 14 );
        display_elems( pent, title );
	}

	if ( check_validity( 138 ) )
	{
		calc_elems( pent, 138 );
        display_elems( pent, title );
	}
}

int main()
{
    //ex2_1();
	//ex2_2();
     ex2_3();
	// ex2_4();
	// ex2_5();
}
