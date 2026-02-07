#include<iostream>
using namespace std;
int main()
{
	int A[5];
	int sum=0;
	cout<<"Enter Numbers:";
	for(int i=0;i<5;i++)
	{
		cin>>A[i];
	}
	for(int x:A)
	{
		sum+=x;
	}
	cout<<"Sum is:"<<sum;
	return 0;
}
