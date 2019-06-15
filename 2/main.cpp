#include <iostream>
 using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int numNeighbors=3;
	if ((numNeighbors >= 3) || (numNeighbors = 4))
	{
	++numNeighbors;  
	cout << "You are dead!" << endl;
	}
	else  
	--numNeighbors; 
}
