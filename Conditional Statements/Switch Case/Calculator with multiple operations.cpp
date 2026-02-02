#include<iostream>
using namespace std;
int main()
{
	int N1,N2;
	char op;
	cout<<"Enter N1 operator N2:";
	cin>>N1>>op>>N2;
	switch(op)
	{
		case '+': cout<<N1+N2; break;
		case '-': cout<<N1-N2; break;
		case '*': cout<<N1*N2; break;
		case '/': if(N2!=0)
		          {
		          	cout<<N1/N2;
				  }
				  else
				  {
				  	cout<<"Divide By Zero Error";
				  }
				  break;
		case '%': if(N2!=0)
		          {
		          	cout<<N1%N2;
				  }
				  else
				  {
				  	cout<<"Divide By Zero Error";
				  }
				  break;
		default: cout<<"Invalid Operator";		  
	} 
	return 0;
}
