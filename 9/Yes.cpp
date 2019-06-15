#include <iostream>
#include <iomanip>
using namespace std;
int  main()
{
	int row,i,j,a,b;
	cin>>row;
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=i;j++)
		{
			cout
		}
		cout<<endl;
	}
	for (a=1;a<=11;a++)
	{
		for (b=1;b<=20;b++)
		{
			if(b>=a-1 && b<=21-a)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}

}

