#include<iostream>
using namespace std;
class Student
{
	private: int marks;
	public:
		   void setMarks(int m)
		   {
		   	if(m>=0 && m<=100)
		   	{
		   		marks=m;
			}
			else
			{
				cout<<"Marks can not be displayed"<<endl;
			}
		   }
		   int getMarks()
		   {
		   	return marks;
		   }
};
int main()
{
  Student s;
  s.setMarks(65);
  cout<<"Marks Are:"<<s.getMarks()<<endl;
  return 0;	
}
