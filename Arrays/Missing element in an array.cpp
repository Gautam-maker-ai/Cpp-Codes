#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int arr[n-1];
	cout<<"Enter "<<n-1<<" Elements:";
	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	int tot=n*(n+1)/2;//yeh total nikalne ke liye hai jaise n hai 5 toh 5*6/2=15
	int sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum+=arr[i];
	}
	cout<<"Missing Number is:"<<tot-sum;
	return 0;
}
