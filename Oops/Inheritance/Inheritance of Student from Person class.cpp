#include<iostream>
using namespace std;
class Person
{
	private:
		    int age;
	public:
		   Person(int a=0)
		   {
		   	setAge(a);
		   }
		   void setAge(int a)
		   {
		   	if(a>0)
		   	{
		   		age=a;
			}
			else
			{
				cout<<"Age Cannot Be Negative";
			}
		   }
		   int getAge()
		   {
		   	return age;
		   }
};
class Student:public Person
{
	private:
		    int RollNo;
	public:
		  Student(int a=0,int rn=0):Person(a)/ll automatically call default constructor and age wil become // We use Person(a) to call the parameterized constructor of the base class. If we do not write it, the default constructor of Person is called and age becomes 0.
		  {
		  	setRollNo(rn);
		  }
		  void setRollNo(int rn)
		  {
		  	if(rn>0)
		  	{
		  		RollNo=rn;
			}
			else
			{
				cout<<"RollNo Cannot Be Negative";
			}
		  }
		  int getRollNo()
		  {
		  	return RollNo;
		  }
};
int main()
{
	Student s(17,101);
	cout<<"Age is:"<<s.getAge()<<endl;
	cout<<"Roll No is:"<<s.getRollNo()<<endl;
	return 0;
	
}
