#include<iostream>
using namespace std;

int main()
{
	const Vector3d v1(1.5,2,3);
	const Vector3d v2(2.0);
	Vector3d v3 = v1 - v2;
	cout << v1 << "-" << v2 << "=" << v3 << '\n';
	cout << Vector3d::getCount() << '\n';
}

class Vector3d
{
	