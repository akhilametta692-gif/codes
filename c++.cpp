#include<iostream>
#include<string>
using namespace std;
class B;
class A
{
	int a;
	public:a() {a=10;}
	friend void showvalues(A,B);
	friend void swapping(A &,B &);
};
class B
{
	int b;
	public:b() {b=20;}
	friend void showvalues(A,B);
	friend void swaping(A &,B &);
};
void swapping(A &x, B &y)
{
	int temp=x.a;
	x.a=y.b;
	y.b=temp;
}
int main()
{
	A obj1;
	B obj2;
	cout<<
	
}
