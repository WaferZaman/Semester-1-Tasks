#include <iostream>
using namespace std;

int main() 
{
	int price=0,total=0,discount=0;	//Declaring variables
	cout<<"If you want to wxit, enter -999 "<<endl;
	while (price!=-999)	//using while loop
	{
		cout<<"Enter Price of the item=";
		cin>>price;
		if (price!=-999)
		{
		total=total+price;
		}
	}
	if (total>5000)
	{
		discount=total*0.1;
		total=total-discount;
		cout<<"With discount of 10%, your total bill is "<<total<<endl;
	}
	else
	{
		cout<<"Your total bill is "<<total<<endl;
	}
	return 0;
}
