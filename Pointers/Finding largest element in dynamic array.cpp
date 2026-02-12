#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	
	int *arr=new int[n];//Dynamic Memory allocation
	
	cout<<"Enter Elements:";;
	for(int i=0;i<n;i++)
	{
		cin>>*(arr+i);
	}
	
	int *max=arr;
	for(int i=1;i<n;i++)
	{
		if(*(arr+i)>*max)
		{
			max=arr+i;
		}
	}
	cout<<"Largest element is:"<<*max<<endl;
	delete []arr;
	return 0;
}
