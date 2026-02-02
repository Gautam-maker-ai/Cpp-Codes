#include<iostream>
using namespace std;
int main()
{
	int id,pass;
	cout<<"Enter ID and Password:";
	cin>>id>>pass;
	if(id==1234)
	{
		if(pass==999)
		{
			cout<<"Login Successful";
		}
		else
		{
			cout<<"Wrong Password";
		}
	}
	else
	{
		cout<<"Invalid User";
	}
	return 0;
}
