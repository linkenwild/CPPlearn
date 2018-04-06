/*
	Make the following main work by writing a class Complex.
	In this second version you will overload operator << and use the friend syntax
	
	Replace this comment with your author information and cite as necessary.
 */
#include <iostream>
using namespace std;

class Complex
{
private:
	double real,imag;
public:
	Complex (double r=0, double i=0): real(r), imag(i) {}
	//friend Complex operator +(Complex& ,  Complex& );
	friend Complex operator +(Complex a,  Complex b)
	{
		Complex c;
		c.real = a.real + b.real;
		c.imag = a.imag + b.imag;
		return c;
	}
	
	friend Complex operator -(Complex a)
	{
		return Complex(-a.real, -a.imag);
	}
	
	friend ostream& operator << ( ostream& os, const Complex& a)
	{
		os << '(' << a.real <<',' << a.imag << ')';
		return os;
	}
	
	
};


int main() {
	const Complex a(1.0, 2.0); // create a complex number with real=1.0 imag=2.0
	const Complex b(0.5, 0.0); // real = 0.5, imag = 0.0
	const Complex c = a + b;   // overload operator + using friend
	Complex d = -c; // use friend
	cout << c << '\t' << d << '\n';
}