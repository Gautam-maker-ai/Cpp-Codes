#include <iostream>
using namespace std;
class Test
{
private:
    int a;
    int *p;

public:
    Test(int x)
    {
        a=x;
        p= new int[a];
    }
    
	Test(const Test &t)
    {
        a=t.a;
        p=new int[a];    
        for(int i=0;i<a;i++)
        {
            p[i]=t.p[i];
        }
    }

    ~Test()
    {
        delete[] p;
    }
};

int main()
{
    Test t1(5);
    Test t2(t1);   
    return 0;
}

