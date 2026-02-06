#include<iostream>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	string input;
	int n;
	cout<<"Enter Number:";
	getline(cin,input);
	stringstream ss(input);
	do
	{
		ss>>n;
		if(!ss)
		break;
		bool isNeg=false;
		if(n<0)
		{
			isNeg=true;
			n=-n;
		}
		
		int ld=n%10;
		int rema=n/10;
		
		int temp=rema;
		int digits=0;
		if(temp==0)
		{
			digits=1;
		}
		else
		{
			do
			{
			  digits++;
			  temp=temp/10;
			}
			while(temp!=0);
		}
		int rot=ld*pow(10,digits)+rema;
		if(isNeg)
		{
			cout<<"-"<<rot<<" ";
		}
		else
		{
			cout<<rot<<" ";
		}
	} while(true);
	return 0;
}
//rot->rotate
//rema->remaining
//ld->last digit
