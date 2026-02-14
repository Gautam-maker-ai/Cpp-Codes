#include<iostream>
using namespace std;
int add(int a=5,int b=10,int c=0)
{
	return a+b+c;
}
int main()
{
	cout<<add()<<endl;
	cout<<add(2)<<endl;
	cout<<add(2,3)<<endl;
	cout<<add(2,3,4)<<endl;
}
