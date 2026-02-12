#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter N:";
	cin>>n;
	int source[n],dest[n];
	int *src=source;
	int *dst=dest;
	cout<<"\nEnter "<<n<<" Numbers:";
	for(int i=0;i<n;i++)
	{
		cin>>*(src+i);
	}
	for(int i=0;i<n;i++)
	{
		*(dst+i)=*(src+i);
	}
	cout<<"\nCopied Array is:";
	for(int i=0;i<n;i++)
	{
		cout<<*(dst+i)<<" ";
	}
	return 0;
}
