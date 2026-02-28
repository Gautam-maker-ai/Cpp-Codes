#include<iostream>
using namespace std;
class A
{
    public:
           void showA()
           {
             cout << "Class A" << endl;
           }
};

class B:public A
{
    public:
           void showB()
           {
             cout << "Class B" << endl;
           }
};

class C:public B
{
    public:
           void showC()
           {
              cout << "Class C" << endl;
           }
};
class D
{
    public:
           void showD()
           {
              cout << "Class D" << endl;
           }
};

// Hybrid = Multilevel + Multiple
class E : public C, public D
{
};

int main()
{
    E obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
