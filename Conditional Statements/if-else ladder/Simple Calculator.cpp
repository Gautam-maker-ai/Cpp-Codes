#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	cin>>a>>b>>op;
	if(op=='+')
	{
		cout<<a+b;
	}
	else if(op=='-')
	{
		cout<<a-b;
	}
	else if(op=='*')
	{
		cout<<a*b;
	}
	else if(op=='/')
	{
		cout<<a/b;
	}
	else
	{
		cout<<"Invalid operator";
	}
	return 0;
}
