#include<iostream>
using namespace std;
int pow(int m,int n)
{
	int result=1;
	for(int i=1;i<=n;i++)
	{
		result=result*m;
	}
	return result;
}
int main()
{
	int m=5,n=2;
	cout<<n<<" Power of "<<m<<" is: "<<pow(m,n);
	return 0;
}
