#include<iostream>
using namespace std;
class Student
{
	public:
		   string name;
		   int age;
		   void display()
		   {
		   	cout<<"Name is:"<<name<<endl;
		   	cout<<"Age is:"<<age<<endl;
		   }
};
int main()
{
	Student s;
	s.name="Diksha";
	s.age=20;
	s.display();
	return 0;
}
