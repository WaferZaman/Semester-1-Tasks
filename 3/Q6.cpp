#include <iostream>
using namespace std;
int  main()
{
	int row, column, i, j, k;
	char no;
	do
	{
		cout<<"MENU"<<endl;
		cout<<"@-Square"<<endl<<"#-Rectangle"<<endl<<"$-Triangle"<<endl<<"%-Hollow Equilatoral Triangle"<<endl;
		cout<<"^-Hollow Rectangle"<<endl<<"&-Hollow Diamond"<<endl<<"!-Exit"<<endl;
		cout<<"Please input option:"<<endl;
		cin>>no;
		cout<<endl;
		switch(no)
		{
			case '@':
				{
					cout<<"Enter row number :";
					cin>>row;
					for(i=1; i<=row; i++)
					{
						for(j=1; j<=row; j++)
						{
							cout<<"* ";
						}
						cout<<endl;
					}
					break;
				}
			case '#':
				{
					cout<<"Enter length :";
					cin>>row;
					cout<<"Enter width :";
					cin>>column;
					if (column==row)
					{
						column+=2;
					}
					for(i=1; i<=row; i++)
					{
						for(j=1; j<=column; j++)
						{
							cout<<"* ";
						}
						cout<<endl;
					}
					break;
				}
			case '$':
				{
					cout<<"Enter height:";
					cin>>row;
					for(i=0; i<=row; i++)
					{
						for(j=1; j<=i; j++)
						{
							cout<<"* ";
						}
						cout<<endl;
					}
					break;
				}
			case '%':
				{
					cout<<"Enter lenght of triangle:";
					cin>>row;
					for (i = 1; i <= row; i++) 
					{	  
        				for (j = 1; j <= row - i; j++) 
						{ 
            				cout << " "; 
        				} 
        				while (k != (2 * i - 1)) 
						{ 
            				if (k == 0 or k == 2 * i - 2)
							{ 
                				cout << "*";
								k++;
							}
            				else
							{
                			cout << " ";
                			k++;
            				}
        				}
        				k=0;
        				cout << endl;
    				}
				}
					break;
			case '^':
				{	
					cout<<"Enter length :";
					cin>>row;
					cout<<"Enter width :";
					cin>>column;
					if (column==row) //In case if user enters column and rows equal because its program for rectangle not square
					{
						column+=2;	//Required question is for rectangle so there will be addition of 2 to make it rectangle
					}
					{
						for(i=0; i<row; i++)
						{
							for(j=0; j<column; j++)
							{
								if(i==0 || i==row-1 || j==0 || j==column-1)
								{	
								cout<<"* ";
								}
								else
								{
								cout<<"  ";
								}
							}
 							cout<<endl;
 						}
 					}
					break;
				}
			case '&':
			{ 
				cout<<"Enter length :";
				cin>>row; 
    			for (i = 1; i <= row; i++) 
				{  
        			for (j = 1; j <= row - i; j++) 
						{ 
            				cout << " "; 
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
            			cout << " "; 
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
				break;				 
			}
			default:
				cout<<"Error! Invalid Input. Input again";
				break;
		}
		cout<<endl<<endl<<endl;
}
	while(no!=7);
}


	

