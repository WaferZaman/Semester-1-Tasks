#include <iostream>										//Including input output stream
 using namespace std;									//using namespace std::

int main()												//including main function
{														//Starting paranthesis
	int year;											//Making variable named year
	cout<<"Enter the year you want to check=";			//Displaying input year
	cin>>year;											//Taking year number from user
	if (year%4==0)										// Calculating Year is leap or not
	{													//Starting of nested loop
	if (year%100==0)									// Taking mod by 100
	{													//Third nested loop
	if (year%400==0)									// Taking mod by 400
	cout<<year<<" is a leap year."<<endl;				//If mod by 400 not zero so its a leap year
	else 												//Other wise condition
	cout<<year<<" is not a leap year."<<endl;			//Its not a leapyear
	}													//Closing of third nested loop
	cout<<year<<" is a leap year."<<endl;				//Mod by 100 not zero than not a leap year
	}													//Closing of second nested loop
	else												//Otherwise if mod by 4 not zero
	cout<<year<<" is not a leap year."<<endl;			//Its not a leap year
	
	return 0;											//Returning zero after successful run
}														//Ending paranthesis
