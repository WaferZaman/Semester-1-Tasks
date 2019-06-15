#include <iostream>
using namespace std;

int main() 
{
	int price=0,total=0;
	cout<<"Enter -1 to exit."<<endl;
	while (price!=-1)		//Using sentinal while loop
	{
		cout<<"Enter price of the item=";
		cin>>price;		//Taking price from user
		if(price!=-1)	//If price is not -1 then it will add
		{
			total=total+price;	//Calculating total and storing in total
		}
	}
	cout<<"The Total bill is Rs. "<<total<<endl;	//Showing total when entered -1
	return 0;
}
