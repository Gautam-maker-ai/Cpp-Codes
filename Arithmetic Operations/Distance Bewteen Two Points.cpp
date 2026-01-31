#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	float distance;
	cout<<"Enter x1 and x2:";
	cin>>x1>>x2;
	cout<<"Enter y1 and y2:";
	cin>>y1>>y2;
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout<<"Distance Between Two Points Are:"<<distance;
	return 0;
}
