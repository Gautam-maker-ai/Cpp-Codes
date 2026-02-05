#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,m,r;
	cout<<"Enter The Number:";
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
	}
	if(sum==m)
	{
		cout<<"Armstrong Number";
	}
	else
	{
		cout<<"Not an Armstrong Number";
	}
	return 0;
}
//153 is an armstrong number
