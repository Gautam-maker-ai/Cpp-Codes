#include<iostream>
using namespace std;
int main()
{
	float SI,P,R,T;
	cout<<"Enter Principal:";
	cin>>P;
	cout<<"Enter Rate:";
	cin>>R;
	cout<<"Enter Time:";
	cin>>T;
	SI=(P*R*T)/100;//Formula
	cout<<"Simple Interest is:"<<SI;
	return 0;
} 
