#include<iostream>
#include<string>
#include<sstream>//For using stringstream
using namespace std;
int main()
{
	string input;
	int n,pos=0,neg=0,zero=0;
	cout<<"Enter Numbers with Space:";
	getline(cin,input);
	stringstream ss(input);//Here meaning of this line is that we are turning a string into an input string, just like cin
	do
	{
		ss>>n;
		if(!ss)//Meaning of this line is there is no more data to read from the string
		break;
		if(n>0)
		{
			pos++;
		}
		else if(n<0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	while(true);
	cout<<"Positive Values Are:"<<pos<<endl;
	cout<<"Negative Values Are:"<<neg<<endl;
	cout<<"Zeroes Are:"<<zero<<endl;
	return 0;
}
