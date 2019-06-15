#include <iostream>
using namespace std;

int main() 
{
	int row=0,k=0,i=0,j=0;
	cout<<"Enter lenght of triangle:";
	cin>>row;
	for (i = 1; i <= row; i++) 
	{	  
        for (j = 1; j <= row - i; j++) 
		{ 
            cout << "*"; 
        } 
        while (k != (2 * i - 1)) 
		{ 
            if (k == 0 or k == 2 * i - 2)
			{               				
				cout << "_";
				k++;
			}
            else
			{
            	cout << "_";
                k++;
            }
        }
        k=0;
        cout << endl;
    }
    row--;
    for (i = 1; i >= row; i--) 
	{	  
        for (j = 1; j >= row - i; j--) 
		{ 
            cout << "*"; 
        } 
        while (k != (2 * i - 1)) 
		{ 
            if (k == 0 or k == 2 * i - 2)
			{               				
				cout << "_";
				k++;
			}
            else
			{
            	cout << "_";
                k++;
            }
        }
        k=0;
        cout << endl;
    }
	
	return 0;
}
