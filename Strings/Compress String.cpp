#include<iostream>
#include<string>
using namespace std;
string compressString(string s)
{
	string result="";
	int count=1;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			count++;
		}
		else
		{
			result +=s[i-1];
			result +=to_string(count);
			count=1;
		}
	}
	result+=s[s.length()-1];
	result+=to_string(count);
	return result;
}
int main()
{
	string s="aabbcccjbdchhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	cout<<compressString(s);
	return 0;
}
