#include <iostream>
using namespace std;

int main() 
{
	int row,i,j,k;
		cout<<"Enter lenght of triangle:";
					cin>>row;
					for (i = 1; i <= row; i++) 
					{	  
        				for (j = 1; j <= row - i; j++) 
						{
            				cout << " "; 
        				}
						while (k!=2*i-1)
						{
							cout<<"* ";
							k++;
						}
						k=0;
						cout<<endl;
					}
					row--;
    			for (i = row; i >= 1; i--) 
				{ 
        			for (j = 0; j <= row-i; j++) 
					{ 
            			cout << "   "; 
        			} 
        			k = 0; 
        			while (k != (2*i)-1) 
					{ 
                		cout << "* ";
            			k++;
        			} 
        			cout << endl; 
    			}
	return 0;
}

