#include<iostream>
using namespace std;
int add(int x,int y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
int main()
{
	cout<<"Two Parameter addition is:"<<add(2,3)<<endl;
	cout<<"Three Parameter addition is:"<<add(2,3,4)<<endl;
	return 0;
}
