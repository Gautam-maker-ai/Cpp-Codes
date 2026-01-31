#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"Person Can Vote";
	}
	else
	{
		cout<<"Person Cannot Vote";
	}
	return 0;
}
