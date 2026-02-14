#include<iostream>
using namespace std;
int search(int A[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(key==A[i])
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int A[]={12,23,34,45,56,67,78,89,90};
	int k;
	cout<<"Enter The Element which u want to find:";
	cin>>k;
	int index=search(A,9,k);
	cout<<"Element is at "<<index<<" index";;
	return 0;
}
