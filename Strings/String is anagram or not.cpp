#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string s1,string s2)
{
if(s1.length()!=s2.length())
{
	return false;
}
vector <int> freq(256,0);
for(char c:s1)
{
	freq[c]++;
}
for(char c:s2)
{
	if(freq[c]==0)
	{
		return false;
	}
	freq[c]--;
 }

	return true;
}
int main()
{
	string s1="listen";
	string s2="silent";
	if(isAnagram(s1,s2))
	{
		cout<<"Anagram";
	}
	else
	{
		cout<<"Not Anagram";
	}
	return 0;
}
