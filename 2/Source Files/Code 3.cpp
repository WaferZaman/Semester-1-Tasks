#include <iostream>									//Calling IO stream
#include <iomanip>									//Calling manip library
 using namespace std;								//using name space std

int main() 											//Calling main function
{
	int 	biryani=100, jalfrezi=300,icecream=50, servings=0, list=0, bill=0 ;		//Declaring variables
	int order=0;									//Declaring Variable
	label:											//Goto returning
	cout<<"Select dish by its list number 1,2,3=";	//Displaying menu
	cin>>list;										//Getting order from user
	if (list==1)									//If want Dish1
	{
		cout<<"Enter how much servings of Biryani=";
		cin>>servings;
		bill=servings*biryani;
		cout<<"Total bill=:"<<bill<<endl;
	}
	if (list==2)									//If Want dish2
	{
		cout<<"Enter how much servings of Jalfrezi=";
		cin>>servings;
		bill=servings*jalfrezi;
		cout<<"Total bill="<<bill<<endl;
	}
	if (list==3)									//If wants dish 3
	{
		cout<<"Enter how much servings of icecream=";
		cin>>servings;
		bill=servings*icecream;
		cout<<"Total bill="<<bill<<endl;
	}
	cout<<"If you want to order again then press 1=";	//If you want to order again
	cin>>order;										//If want to again
	if (order==1)									//Checking order again or not
	goto label;										//If yes it goes to taking order again
		
	return 0;										//Ending of prog
}

