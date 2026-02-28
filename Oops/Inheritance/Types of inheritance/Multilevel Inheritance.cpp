///Multilevel Inheritance
#include<iostream>
#include<string>
using namespace std;
class Person
{
	protected:
		      int age;
	public:
		     Person(int a=0)
		     {
		     	age=a;
			 }
			 int getAge()
			 {
			 	return age;
			 }
};
class Student:public Person
{
	protected:
		     int rollNo;
	public:
		    Student(int a=0,int rn=0):Person(a)	
		    {
		    	rollNo=rn;
			}
			int getRollNo()
			{
				return rollNo;
			}
};
class CollegeStudent:public Student
{
	private:
		    string course;
	public:
		   CollegeStudent(int a, int rn, string c):Student(a,rn)
		   {
		   	course=c;
		   }
		   string getCourse()
		   {
		   	return course;
		   }
};
int main()
{
	CollegeStudent cs(18,101,"B.Tech");
	cout<<"Age is:"<<cs.getAge()<<endl;
	cout<<"Roll No is:"<<cs.getRollNo()<<endl;
	cout<<"Course is:"<<cs.getCourse()<<endl;
	return 0;
}
