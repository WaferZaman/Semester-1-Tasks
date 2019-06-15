#include <iostream>
using namespace std;

int main() 
{
	int number=1,reverse=0,mod=0;
	cout<<"Enter negative number to exit."<<endl;
	while (number>0)
	{
		cout<<"Enter number=";
		cin>>number;
		if (number>0)
		{
			reverse=number;
			cout<<"The number is "<<number<<" And its mod is ";
			while (reverse>0)
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
