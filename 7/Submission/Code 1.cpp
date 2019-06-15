#include <iostream>														//including input output stream from library
#include <iomanip>														//Including input output manipulation from library
using namespace std;													//using namespace std function
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 																//Starting of main program
{																		//Starting of Code
	int totaldays=0,year=0,month=0,day=0,initial=0;						//Declaring Variables
	cout<<"Input Total Days=";											//Displaying Input Total Days
	cin>>totaldays;														//Taking total days from user
	year=totaldays/365;													//Calculating years
	initial=totaldays%365;												//Taking Mod
	month=initial/30;													//Calculating months
	day=initial%30;														//Calculating days
	cout<<year<<"years "<<month<<"months "<<day<<"days "<<endl;			//Displaying years,months and days

	return 0;															//After Ending returning zero value
}																		//Ending of Code


