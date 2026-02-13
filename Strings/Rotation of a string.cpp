#include<iostream>
#include<string>
using namespace std;
bool isRotation(string s1,string s2)
{
	if(s1.length()!=s2.length())
	{
		return false;
	}
	string temp=s1+s2;
	if(temp.find(s2)!=string::npos)
	{
		return true;
	}
	return false;
}
int main()
{
	string s1="Gautam";
	string s2="matauG";
	cout<<isRotation(s1,s2);
	return 0;
}
//if output is 1 then it is true 
//if output is 0 then it is false
