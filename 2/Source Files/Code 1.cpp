#include <iostream>												//Adding io stream
#include <string>												//Adding string function for length
 using namespace std;											//Adding std::

int main() 														//Calling main function
{																//Starting of code
	string cnic;												//Making a string variable
	cout<<"Input CNIC NUMBER IN FORMAT XXXXX-XXXXXXX-X=";		//Displaying CNIC input format
	cin>>cnic;													//Taking CNIC from user
	if ( cnic.length()==15)										//Checking of validity of CNIC
	cout<<cnic<<"is a valid cnic number."<<endl;				//If valid printing out it is calid
	else														//Otherwise
	cout<<cnic<<"is not a valid cnic number."<<endl;			//Printing it is not valid
	
	return 0;													//Returning value zero after end
}																//Ending paranthesis
