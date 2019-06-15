#include <iostream>

using namespace std;

int main()
{
    int space = 7, row = 7, stars = 1, i, j;
    
    for ( int init = 1; init <= row; init++ ) {
        for (i = 1; i <= space; i++)
            cout << ' ';
        for (j = 1; j <= stars; j++)
            cout << '*';
        if ( init > (row-1)/2 ) {
           space++;
           stars -= 2;
           }
        else {
           space--;
           stars += 2;
           }
        cout << endl;    
        }
        
    cout << endl;
    system("pause");
    return 0;
}    


