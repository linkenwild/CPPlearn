#include<iostream>
using namespace std;

class Complex
{
private:
		double real, imag;
public:
		Complex(double r=0, double i=0) {real =r; imag =i;}
		Complex operator +(const Complex&) const;
		friend Complex operator -(Complex&, Complex&);
		
		friend ostream& operator << (ostream& os, const Complex& m)
		{
			os << '(' << m.real << ',' << m.imag << ')';
			return os;
		}
		
};

Complex Complex::operator + (const Complex& m)
const {
	Complex result;
	result.real = this->real + m.real;
	result.imag + this->imag + m.imag;
	return result;
}

Complex operator -(	Complex& x, Complex& y)
{
	return Complex(x.real-y.real, x.imag-y.imag);
}

int main()
{
	Complex a(1.0,1.5);
	Complex b(1.0);
	Complex c(1.5,2.3);
	Complex d = a+ b;
	Complex e = a- b;
	cout << e;
}
	
	
	