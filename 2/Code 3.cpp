#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int a=0,b=0,c=0,root1=0,root2=0;
	cout<<"Enter value of a,b and c=";
	cin>>a>>b>>c;
	root1=(-b+sqrt(b*b-4*a*c)/(2*a));
	root2=(-b-sqrt(b*b-4*a*c)/(2*a));
	cout<<"Root1="<<root1<<endl;
	cout<<"Root2="<<root2<<endl;
	
	return 0;
}
