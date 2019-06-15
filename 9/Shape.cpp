#include <iostream>
#include <iomanip>
using namespace std;
int  main()
{
	int no, row, column, i, j, k,n=12,a=01,x=2,y=2;
cout<<"Enter length :";
				cin>>row; 
    			for (i = 1; i <= 4; i++) 
				{  
        			for (j = 1; j <= 4 - i; j++) 
						{ 
            				cout << " "; 
        				} 
        				while (k != (2 * i - 1)) 
						{ 
            				if (k == 0 or k == 2 * i - 2)
								if (k == 0)
								{ 
                					cout <<" "<< n;
                					n=n-1;
                				}
                				else
                				{
                					cout<<setw(x)<<"0"<<a;
                					a=a+1;
                					x=x+1;
								}
            				else
                				cout << " "; 
            				k++; 
        				} 
        				k = 0; 
        				cout << endl; 
    			} 
    			row--;
    			x=2;
    			for (i = row; i >= 1; i--) 
				{ 
        			for (j = 0; j <= 4-i; j++) 
					{ 
            			cout << " "; 
        			} 
        			k = 0; 
        			while (k != (2*i-1)) 
					{ 
            			if (k == 0 or k == 2*i-2) 
                			if (k == 0)
								{ 
                					cout <<"0"<< n;
                					n=n-1;
                				}
                				else
                				{
                					cout<<setw(x)<<"0"<<a;
                					a=a+1;
                					x=x-1;
								} 
            			else
                			cout << " "; 
            			k++; 
        			} 
        			cout << endl; 
    			} 
}
