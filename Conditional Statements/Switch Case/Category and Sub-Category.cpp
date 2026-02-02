//This program uses a nested switch statement where the outer 
//switch checks the category (fruit or vegetable) and the inner switch checks
//the type within that category. Based on the user’s input, the program displays the selected item
//1 is for fruits
//2 is for vegetables
//3 is for dairy products
#include<iostream>
using namespace std;
int main()
{
	int cat,type;
	cout<<"Enter Category and Type:";
	cin>>cat>>type;
	switch(cat)
	{
		case 1:
			   switch(type)
			   {
			   	case 1: cout<<"Apple"; break;
			   	case 2: cout<<"Kiwi"; break;
			   	case 3: cout<<"Pearl"; break;
			   	default: cout<<"Unknown Fruit";
			   }
			   break;
		case 2:
		       switch(type)
			   {
			   	case 1: cout<<"Potato"; break;
			   	case 2: cout<<"Onion"; break;
			   	case 3: cout<<"Cauliflower"; break;
			   	default: cout<<"Unknown Vegetable";
			   }
			   break;
		case 3:
		       switch(type)
			   {
			   	case 1: cout<<"Milk"; break;
			   	case 2: cout<<"Curd"; break;
			   	case 3: cout<<"Lassi"; break;
			   	default: cout<<"Unknown Dairy Product";
			   }
			   break;
		default: cout<<"Invalid Category";	   	   	   
	}
	return 0;
}
