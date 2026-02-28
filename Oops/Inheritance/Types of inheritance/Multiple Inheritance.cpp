#include<iostream>
#include<string>
using namespace std;
class Phone
{
	protected:
		      string touchscreen;
	public:
		   Phone(string ts="yes")
		   {
		   	touchscreen=ts;
		   }
		   string getTouchScreen()
		   {
		   	return touchscreen;
		   }
};
class Camera
{
	protected:
		      int pixel;
	public:
		    Camera(int p)
		    {
		    	pixel=p;
			}
			int getPixel()
			{
				return pixel;
			}
};
class Smartphone:public Phone,public Camera
{
	private:
		    int password;
	public:
		   Smartphone(string ts,int p,int pass):Phone(ts),Camera(p)
		   {
		   	password=pass;
		   }
		   int getPassword()
		   {
		   	return password;
		   }
};
int main()
{
	Smartphone sp("yes",48,1234);
	cout<<"Touch Screen:"<<sp.getTouchScreen()<<endl;
	cout<<"Camera in  Megapixels:"<<sp.getPixel()<<endl;
	cout<<"Password:"<<sp.getPassword()<<endl;
	return 0;
}
