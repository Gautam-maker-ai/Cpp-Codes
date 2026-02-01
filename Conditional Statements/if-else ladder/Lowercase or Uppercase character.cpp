#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a Character:";
	cin>>ch;
	if(ch>='A' && ch<='Z')
	{
		cout<<"Uppercase Character";
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"Lowercase Character";
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"Digit";
	}
	else
	{
		cout<<"Special Character";
	}
	return 0;
}
