#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter Two Numbers:";
	cin>>n>>m;
	while(m!=n)
	{
		if(m>n)
		{
			m=m-n;
		}
		else
		{
			n=n-m;
		}
	}
	cout<<m;
	//or u can print n also
}
