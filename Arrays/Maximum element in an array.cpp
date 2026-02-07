#include<iostream>
using namespace std;
int main()
{
	int A[7];
	int max=A[0];
	cout<<"Enter 7 Numbers:";
	for(int i=0;i<7;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<7;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"Maximum Element is:"<<max;
	return 0;
}
