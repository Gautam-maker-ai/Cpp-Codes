#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	vector<int> A(n);
	cout<<"Enter "<<n<<" Numbers:";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int key;
	cout<<"Enter Key u want to find:";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==A[i])
		{
			cout<<"Found At index:"<<i;
			return 0;
		}
	}
	cout<<"Key Not Found";
	return 0;
}
