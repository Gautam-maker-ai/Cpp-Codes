#include<iostream>
#include<vector>
#include<algorithm>
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
	sort(A.begin(),A.end());
	int key,l=0,h=n-1;
	cout<<"Enter key:";
	cin>>key;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<"Found At:"<<mid;
			return 0;
		}
		else if(key<A[mid])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout<<"Not Found";
	return 0;
}
//Remember in binary search array should be in sorted order and u can also use inbuilt function sort
