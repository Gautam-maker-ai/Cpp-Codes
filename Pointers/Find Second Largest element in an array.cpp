#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	if(n<2)
	{
		cout<<"Second largest element not possible";
		return 0;
	}
	
	int *arr=new int[n];
	cout<<"\nEnter Elements:";
	for(int i=0;i<n;i++)
	{
		cin>>*(arr+i);
	}
	int *largest=arr;
	int *second=nullptr;
	for(int i=1;i<n;i++)
	{
		if(*(arr+i)>*largest)
		{
			second=largest;
			largest=arr+i;
		}
		else if(second==nullptr || 	(*(arr+i)>*second && *(arr+i)!=*largest))
		{
			second=arr+i;
		}
	}
	if(second==nullptr)
	{
		cout<<"No second largestt element (all element are same)";
	}
	else
	{
		cout<<"Second largest element is:"<<*second;
	}
	delete []arr;
	return 0;;
}
