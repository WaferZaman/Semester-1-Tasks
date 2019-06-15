#include <iostream>
using namespace std;

int main() 
{
	int row=0,k=0;
	cout<<"Enter number of rows :";
	cin>>row;	//Taking number of rows from user
	for (int i=1;i<=row;i++)	//For loop for controlling number if rows
	{
		for(int j=1;j<=i;j++)	//Nested for loop for making stars in column
		{
			cout<<" ";
		}
		while (k == 2*i-1)
		{
			cout<<"*";
			k++;
		}
		k=0;
		cout<<endl;				//For ending row and starting new row
	}
	return 0;
}
