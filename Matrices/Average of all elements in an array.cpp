#include<iostream>
using namespace std;
int main()
{
	int n,i;
	float num[100],sum=0.0,A;
	cout<<"Enter no of Elements:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Number "<<i+1<<":";
		cin>>num[i];
		sum=sum+num[i];
	}
	A=sum/n;
	cout<<"Average is:"<<A;
	return 0;
}
