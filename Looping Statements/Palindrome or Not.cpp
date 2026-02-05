#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,r,m;
	cout<<"Enter The Number:";
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	if(rev==m)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not A Palindrome";
	}
	return 0;
}
