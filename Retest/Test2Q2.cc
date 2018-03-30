#includes <iostream>
using namespace std;
class A 
{
private:
	A() { cout << 'x';}
	A(int x) { cout << "test";}
};

class B
{
public:
	B(int x){ cout << "B";}
};

class C : public B
{
public:
	C(): B(3) {}
};

class D : public B
{
public:
	D(int x): B(){}
};

class E
{
public:
	virtual void f() = 0;
};

class F : public E
{
public:
	void f() {cout << "yar";}
};

class G : public F
{
public:
	void g() { cout << "ugh";}
};

class H : public E
{};

class J {};

int main()
{
	// A a1; A() is in private
	B b1(2);
	C c1;
	// C c2(); there is  no C()in class C
	C c3(2);
	// D d1(3);
	//D* dp;
	//E e1;
	F f1;
	G g1;
	//H h1;
	//J j1;
	//J j2= j1;
}
	
	