#include<iostream>
using namespace std;

class Vector3d
{
private:
	double x,y,z;
	static int count;
	
public:
	Vector3d(double x=0, double y=0, double z=0): x(x), y(y), z(z){++count;}
	friend Vector3d operator - (const Vector3d& a, const Vector3d& b)
	{
		return Vector3d(a.x-b.x, a.y-b.y, a.z-b.z);
	}
	
	friend ostream& operator << (ostream& os, const Vector3d& a)
	{
		os << "(" << a.x <<"," << a.y << "," << a.z << ")";
		return os;
	}
	
	
	
	static int getCount(void)
	{
		
		return count;
	}
};
int Vector3d::count;
		
int main()
{
	const Vector3d v1(1.5,2,3);
	const Vector3d v2(2.0);
	Vector3d v3 = v1 - v2;
	cout << v1 << "-" << v2 << "=" << v3 << '\n';
	cout << Vector3d::getCount()<< '\n';
}
		