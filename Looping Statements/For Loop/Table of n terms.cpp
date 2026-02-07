#include<iostream>
using namespace std;
int main()
{
	int n,prod=1;
	cout<<"\nEnter Number:";
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		prod=n*i;
		cout<<n<<"*"<<i<<"="<<prod<<endl;
	}
	return 0;
}
