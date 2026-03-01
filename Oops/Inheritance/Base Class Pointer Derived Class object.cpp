#include<iostream>
using namespace std;
class base
{
	public:
		   void fun1();
		   void fun2();
		   void fun3();
};
void base::fun1()
{
	cout<<"Base class fun1"<<endl;
}
void base::fun2()
{
	cout<<"Base class fun2"<<endl;
}
void base::fun3()
{
	cout<<"Base class fun3"<<endl;
}
class derived:public base
{
	public:
		   void fun4();
		   void fun5();
};
void derived::fun4()
{
	cout<<"Base class fun4"<<endl;
}
void derived::fun5()
{
	cout<<"Base class fun5"<<endl;
}
int main()
{
	base *p;
	p=new derived();
	p->fun1();
	p->fun2();
	p->fun3();
	//Here we can not call fun4 and fun5 because A base class pointer only “knows” what exists in the base class.
}
