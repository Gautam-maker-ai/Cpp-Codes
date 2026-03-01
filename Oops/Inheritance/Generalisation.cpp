#include<iostream>
using namespace std;
class Person
{
	public:
		   string name;
		   void getName()
		   {
		   	cout<<"Enter Name:";
		   	getline(cin,name);
		   }
};
class Student:public Person
{
	public:
		   int age;
		   void getAge()
		   {
		   	cout<<"Enter Age:";
		   	cin>>age;
		   }
		   void display()
		   {
		   	cout<<"Name is:"<<name<<endl;
		   	cout<<"Age is:"<<age<<endl;
		   }
};
int main()
{
	Student s;
	s.getName();
	s.getAge();
	s.display();
	return 0;
}
//In inheritance, genralisation means creating a base class that contains common attributes and methods shared by multiple child classes
//This is known as Generalisation.
