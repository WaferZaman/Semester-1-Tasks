#include <iostream>
using namespace std;

int main() 
{
	int factorial=1,number=0,numb2=0;	//Declaring variables
	cout<<"Enter any number you want to check factorial=";
	cin>>number;	//taking input from user
	if (number>=0)
	{
		if (number==0)
		{
			cout<<"Factorial of "<<number<<"! is 1"<<endl;
		}
		else	//If number entered is non zero
		{
			numb2=number;	//Storing number in another variable
			for (numb2;numb2>=1;numb2--)	//using For loop
			{
			factorial=factorial*numb2;	//calculating factorial
			}
			cout<<"Factorial of "<<number<<"! is "<<factorial<<endl;	//Showing factorial
		}
	}
	else	//If entered number is less than zero
	{
		cout<<"Error! You have entered invalid input."<<endl;	//Displaying error message
	}
	return 0;
}

