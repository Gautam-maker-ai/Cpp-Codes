#include<iostream>
using namespace std;
int main()
{
    int total, present;
    float per;
    cin>>total>>present;
    per=(present*100.0)/total;
    if(per>=75)
        cout<<"Allowed in Exam";
    else if(per>=60)
        cout << "Allowed with Medical";
    else
        cout << "Not Allowed";
    return 0;    
}
