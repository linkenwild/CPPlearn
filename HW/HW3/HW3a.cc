/*
	Make the following main work by writing a class Complex.
	Replace this comment with your author information and cite as necessary.
	Notice that since objects are const, you will have to promise not to change them
 */
#include <iostream>
using namespace std;
class Complex
{
private:
	double real;
	double imag;
public:
	Complex(double r=0, double i=0): real(r), imag(i) {}
	
	Complex operator+(const Complex& a)
	const{
		Complex sum;
		sum.real = this->real+a.real;
		sum.imag = this->imag+a.imag;
		return sum;
	}
	
	void print(void)
	const{
		cout << '(' << this->real << ',' << this->imag << ')';
	}
	
	Complex add(const Complex& a)
	const{
		Complex sum;
		sum.real = this->real+a.real;
		sum.imag = this->imag+a.imag;
		return sum;
	}
	
	Complex operator -()
	const{
		Complex sum;
		sum.real=-this->real;
		sum.imag=-this->imag;
		return sum;
	}
};


int main() {
	const Complex a(1.0, 2.0); // create a complex number with real=1.0 imag=2.0
	const Complex b(0.5, 0.0); // real = 0.5, imag = 0.0
	const Complex c = a + b;   // overload operator + using the first syntax we discussed
	c.print(); // should print the following to cout: (1.5,2.0)
	// (member syntax).  Should look the same as method add where the name add
	// is replaced by operator +
	const Complex d = a.add(b); // this should be the same as the above except the name
	d.print();
	Complex e = -d;
	e.print();
}