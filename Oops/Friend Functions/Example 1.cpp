#include<iostream>
using namespace std;
class your;//Forward Declaration
class My
{
	private:
		    int a;
	protected:
		    int b;
	public:
		    int c;
		    friend class your;
};
class your
{
	public:
		   My m;
		   void fun()
		   {
		   	m.a=10;
		   	m.b=20;
		   	m.c=30;
		   }
		   void show()
		   {
		   	cout<<"a is:"<<m.a<<endl;
		   	cout<<"b is:"<<m.b<<endl;
		   	cout<<"c is:"<<m.c<<endl;
		   }
};
int main()
{
	your y;
	y.fun();
	y.show();
}
