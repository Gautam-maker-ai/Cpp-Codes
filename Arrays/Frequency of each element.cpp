#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int A[n];
	cout<<"Enter Elements:";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	map<int,int> freq;
	for(int i=0;i<n;i++)
	{
		freq[A[i]]++;
	}
	for(auto x:freq)
	{
		cout<<x.first<<"=>"<<x.second<<endl;
		//Here x.first is key and x.second is value
	}
	return 0;
}
