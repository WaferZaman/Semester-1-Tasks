#include <iostream>
using namespace std;


int main() 
{
	int row=0,i=0,j=0,k=0;
		cout<<"Enter length :";
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
                				cout << "*"; 
            				else
                				cout << " "; 
            				k++; 
        				} 
        				k = 0; 
        				cout << endl; 
    			} 
    			row--;
    			for (i = row; i >= 1; i--) 
				{ 
        			for (j = 0; j <= row-i; j++) 
					{ 
            			cout << "*"; 
        			} 
        			k = 0; 
        			while (k != (2*i-1)) 
					{ 
            			if (k == 0 or k == 2*i-2) 
                			cout << "*"; 
            			else
                			cout << " "; 
            			k++; 
        			} 
        			cout << endl; 
    			} 
	return 0;
}
