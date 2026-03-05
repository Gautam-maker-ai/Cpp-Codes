#include<iostream>
using namespace std;
class Number
{
	private:
		    int a;
	public:
		   Number(int x)
		   {
		   	a=x;
		   }
		   friend void show(Number n);
};
void show(Number n)
{
	cout<<"Value of a:"<<n.a<<endl;
}
int main()
{
	Number obj(10);
	show(obj);
}
