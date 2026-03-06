#include<iostream>
using namespace std;
class Test
{
	private:
		    int a;
		    int b;
	public:
		   static int count;
		   Test()
		   {
		   	a=10;
		   	b=10;
		   	count++;
		   }
};
int Test::count=0;
int main()
{
	Test t1;
	Test t2;
	cout<<t1.count<<endl;//Answer is 2
	cout<<t2.count<<endl;//Answer is 2
	cout<<Test::count<<endl;//Answer 2
}
// Only one memory location of 'count' is created for the entire class.
// It is shared by all objects of the class.
// Static data members belong to the class, not to individual objects.
