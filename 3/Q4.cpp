#include <iostream>
using namespace std;

int main() 
{
	int number=1,reverse=0,mod=0;
	cout<<"Enter negative number to exit."<<endl;
	while (number>0)	//Using sentinal while loop
	{
		cout<<"Enter number=";
		cin>>number;
		if (number>0)	//Checking if number is greater than zero
		{
			reverse=number;	//Taking number in an other variable
			cout<<"The number is "<<number<<" And its mod is ";	//Printing number and its modd without space
			while (reverse>0)	//Calculating reverse of number
			{
				mod=reverse%10;
			reverse=reverse/10;
			cout<<mod;
			}
			cout<<endl;
		}
	}
	return 0;
}
