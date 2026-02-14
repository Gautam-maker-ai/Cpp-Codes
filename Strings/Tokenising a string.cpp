#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string s="I love C++ programming";
	stringstream ss(s);
	
	vector<string> tokens;
	string token;
	while(getline(ss,token,' '))
	{
		tokens.push_back(token);
	}
	for(auto t:tokens)
	{
		cout<<t<<endl;
	}
	return 0;
}
