#include <iostream>
using namespace std;
class H
{

	virtual void j(void)
	{
		cout << "H::j" << endl;
	}

};
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
class B :public A,public H
{
	 void f(void)
	{
		cout << "B::f" << endl;
	}
	virtual void h(void)
	{
		cout << "B::h" << endl;
	}
};
typedef void (*fun)(void);//typedef ×÷ÓÃ
void main()
{
	B b;
	fun pte;
	for (int i = 0; i < 3; i++)
	{
		pte = (fun)*((int*)*(int*)(&b) + i);
		pte();
	}
	pte = (fun)*(int*)(*((int *)&b + 1));
	pte();
	system("pause");

}