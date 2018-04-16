//essential cpp Ch3
int* find( const vector<int> &vec, int value )
{
	for ( int ix=0; ix<vec.size(); ++ix)
		if (vec[ix]==value)
			return &vec[ix];
		
	return 0;
}

template <typename elemType>
elemType* find( const vector<elemType> &vec, const elemType &value)
{
	for( int ix =0; ix < vec.size(); ++ix)
		if( vec[ix]==value)
			return &vec[ix];
		
	return 0;
}

template <typename elemType>
elemType* find( const elemType *array, int size, const elemType &value)
{
	if ( !array || size <1 )
		return 0;
	
	for ( int ix = 0; ix < size; ++ix)
		if( array[ix] == value )
			return &array[ix];
		
	return 0;
}

template <typename elemType>
elemType* find(const elemType *array, int size, const elemType &value )
{
	if ( !array || size<1 )
		return 0;
	
	for ( int ix=0; ix< size; ++ix, ++array )
		if ( *array == value )
			return array;
	
	return 0;
}

template <typename elemType>
elemType* find( const elemType *first, const elemType *last,
				const elemType &value )
{
	if ( !first || !last )
		return 0;
	
	for ( ; first != last ; ++first )
		if ( *first == value )
			return first;
		
	return 0;
}

int ia[8] = { 1, 1, 2, 3, 5, 8, 13, 21 };
double da[6] = { 1.5, 2.0, 2.5, 3.0, 3.5, 4.0 };
string sa[4] = { "pooh", "piglet", "eeyore", "tigger" };

int *pi = find( ia, ia+8, ia[3] );
double *pd = find( da, da+6, da[3] );
string *ps = find( sa, sa+4, sa[3] );

template <typename elemType>
inline elemType* begin( const vector<elemType> &vec )
{
	return vec.empty() ? 0 : &vec[0];
}



while ( first != last )
{
	cout << *first << ' ';
	++first;
}

for ( iter = svec.begin(); iter != svec.end(); ++iter )
	cout << *iter << ' ';

iterator< vector, string > iter;
vector<string> svec;

vector<string>::iterator iter = svec.begin();




template <typename elemType>
void display( const vector<elemType> &vec, ostream &os )
{
	vector<elemType>::const_iterator iter = vec.begin();
	vector<elemType>::const_iterator end_it = vec.end();
	
	for ( ; iter != end_it; ++ iter )
		os << *iter << ' ';
	os << endl;
}

template <typename IteratorType, typename elemType>
IteratorType find( IteratorType first, IteratorType last,
					const elemType &value)
{
	for( ; first != last ; ++first )
		if( value == *first )
			return first;
		
	return last;
}

const int asize = 8;
int ia[ asize ] = { 1, 1, 2, 3, 5, 8, 13, 21};

vector<int> ivec( ia, ia+asize );
list<int> ilist( ia, ia+asize );

template <typename IteratorType, typename elemType>
IteratorType find( IteratorType first, IteratorType last, 
					const elemType &value )
{
	for ( ; first != last; ++first )
		if(value == *first)
			return first;
		
	return last;
}

const int asize = 8;
int ia[ asize ] = { 1, 1, 2, 3, 5, 8, 13, 21 };

vector<int> ivec( ia, ia+asize );
list<int> ilist( ia, ia+asize );

int *pia = find( ia, ia+asize, 1024 );
if ( pia != ia + asize )
	
vector<int>::iterator it;
it = find( ivec.begin(), ivec.end(), 1024 );
if ( it !=ivec.end() )
	

list<int>::iterator iter;
iter = find( ilist.begin(), ilist.end(), 1024);
if ( iter != ilist.end() )
	


	


				









					
					
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

