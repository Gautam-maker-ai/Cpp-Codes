#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	string input;
	int n,r;
	cout<<"Enter Numbers With Space:";
	getline(cin,input);
	stringstream ss(input);
	do
	{
		ss>>n;
		if(!ss)
		break;
		
		int rev=0;
		bool isNeg=false;
		if(n<0)
		{
			isNeg=true;
			n=-n;
		}
		do
		{
			r=n%10;
			n=n/10;
			rev=rev*10+r;
		}
		while(n!=0);
		if(isNeg)
		{
			cout<<"-"<<rev<<" ";
		}
		else
		{
			cout<<rev<<" ";
		}
	}
	while(true);
	return 0;
}
