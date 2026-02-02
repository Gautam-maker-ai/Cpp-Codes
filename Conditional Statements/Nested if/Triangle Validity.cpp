#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Sides of Triangle a,b,c:";
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && a+c>b)
	{
		if(a==b && b==c)
		{
			cout<<"Equilateral Triangle";
		}
		else if(a==b || b==c || a==c)
		{
			cout<<"Isosceles Triangle";
		}
		else
		{
			cout<<"Scalene Triangle";
		}
	}
	else
	{
		cout<<"Invalid Triangle";
	}
	return 0;
}
//When all three sides are equal then it is equilateral Triangle
//When any two sides are equal then it is isosceles Triangle
//When a triangle is valid triangle and all three sides are different then it is scalene Triangle 
//When First Side+Second Side>Third Side and Second Side+Third Side>First Side and First Side+ Third Side>Second Side then it is Valid Triangle
