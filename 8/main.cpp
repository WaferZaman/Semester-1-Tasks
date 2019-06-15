#include<iostream>
using namespace std;
int main()
{
int X;
X=1;
for(int i=0; i<=5; i++)
{
	for(int a=5; a>i; a--)
{
cout<<" ";

}
cout<<"*";


if (i>0)
{
for(int k=1; k<=X; k++)
{
cout<<" ";

}
X+=2;
cout<<"*";

}
cout<<endl;
}
X-=4;
for(int i=0; i<=5-1; i++)
{
for(int a=0; a<=i; a++)
{
cout<<" ";
}
cout<<"*";
for(int k=1; k<=X; k++)
{
cout<<" ";

}
X-=2;
if(i!=5-1)
{
cout<<"*";

}
cout<<endl;
}
return 0;

}

