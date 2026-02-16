#include<iostream>
using namespace std;
class Counter
{
	private:
		    int count;
		    static int totalObjects;
	public:
		    Counter()
		    {
		    	count=0;
		    	totalObjects++;
			}
			void increament()
			{
				count++;
			}
			int getCount()
		    {
		    	return count;
			}
			static int getTotalObjects()
			{
				return totalObjects;
			}
};
int Counter::totalObjects=0;
int main()
{
	Counter c1,c2;
	c1.increament();
	c1.increament();
	c2.increament();
	cout<<c1.getCount()<<endl;
	cout<<c2.getCount()<<endl;
	cout<<Counter::getTotalObjects();
	
}
