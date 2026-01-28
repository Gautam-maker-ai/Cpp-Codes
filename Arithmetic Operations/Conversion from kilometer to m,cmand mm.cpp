#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Km;
	cout<<"Enter Distance in KM:";
	cin>>Km;
	cout<<fixed<<setprecision(0);//setprecision() is used to control how many digits are shown in the output of floating-point numbers.
	cout<<"In Meteres:"<<Km*1000<<endl;
	cout<<"In Centieteres:"<<Km*100000<<endl;
	cout<<"In Millimeteres:"<<Km*1000000<<endl;
	return 0;
}
