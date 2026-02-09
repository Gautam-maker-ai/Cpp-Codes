#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],mul[10][10];
	int r1,r2,c1,c2,k;
	cout<<"Enter Row/Column of matrix 1:";
	cin>>r1>>c1;
	cout<<"Enter Row/Column of matrix 2:";
	cin>>r2>>c2;
	if(c1!=r2)
	{
		cout<<"Cannot be multiplied";
		return 0;
	}
	cout<<endl<<"Enter Elements of matrix 1:"<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<"Enter Element a:"<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
	}
	cout<<endl<<"Enter elements of matrix 2:"<<endl;
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<"Enter Element b:"<<i+1<<j+1<<":";
			cin>>b[i][j];
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c1;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	cout<<endl<<"Output Matrix:"<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<" "<<mul[i][j];
			if(j==c2-1)
			cout<<endl;
		}
	}
	return 0;
}
