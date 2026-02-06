#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	int i=1,count=0;
	cout<<"Enter Number:";
	cin>>n;
	do
	{
		count++;
		i++;
	}
	while(i<=n.length());
	cout<<"Digits Are:"<<count;
	return 0;
}
//Here we have not taken the datatype int, long int or long long int because they can store value upto a limit
//int can store digits approx to 9 or 10 digits
//long int can store digits approx to 10 or 12 digits
//long long int can store digits approx to 18 or 19 digits 
//If we want to count more than 20 digits we cann take input as string 
