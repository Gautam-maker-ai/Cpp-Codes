#include<iostream>
#include<string>
using namespace std;
int main()
//For Uppercase
{
	string str="welcome";
	string::iterator it;
	for(it=str.begin();it!=str.end();it++)
	{
		if(*it>=97  && *it<=122)
		{
			*it=*it-32;
		}
	}
	cout<<str;
	return 0;
}
//For Lowercase
{
	string str="WELCOME";
	string::iterator it;
	for(it=str.begin();it!=str.end();it++)
	{
		if(*it>=65  && *it<=96)
		{
			*it=*it+32;
		}
	}
	cout<<str;
	return 0;
}
