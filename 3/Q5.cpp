#include <iostream>
using namespace std;

int main() 
{
	int number=0,even=0,odd=0;
	cout<<"Enter negative number to exit."<<endl;
	while (number>=0)
	{
		if (number>=0)
		{
			cout<<"Enter number= ";
			cin>>number;
			if (number%2==0)
			{
			even+=number;
			}
			else
			{
			odd+=number;
			}
		}
	}
	cout<<"Sum of even numbers is= "<<even<<endl;
	cout<<"Sum of odd numbers is= "<<odd<<endl;
	return 0;
}
