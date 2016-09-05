#include <iostream>
using namespace std;
class A
{
	virtual void f(void)
	{
		cout <<"A::f" << endl;
	}
	virtual void g(void)
	{
		cout << "A::g" << endl;
	}
};
class B :public A
{
	virtual void h(void)
	{
		cout << "B::h" << endl;
	}
};
void main()
{

}