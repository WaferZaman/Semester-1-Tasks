#include <iostream>
 using namespace std;

int main() 
{
	int account=0,mins=0,mins1=0;
	float cost,var,var1;
	char service;
	cout<<"Enter your account no. =";
	cin>>account;
	cout<<"Enter Service you want=";
	cin>>service;
	if ((service=='r') || (service=='R'))
	{
		cout<<"Enter number of minutes=";
		cin>>mins;
		if (mins>50)
		{
			var=mins-50;
			cost=10+var*0.20;
			cout<<"Your Account No. is="<<account<<endl;
			cout<<"Your service is regular"<<endl;
			cout<<"minutes you used are="<<mins<<endl;
			cout<<"Your total bill is ="<<cost<<endl;
		}
	}
	else if ((service=='p') || (service=='P'))
	{
		cout<<"number of minutes used during day (6am to 6pm)=";
		cin>>mins;
		if (mins>75)
		var=mins-75;
		cout<<"Number of minutes during the day=";
		cin>>mins1;
		if (mins1>100)
		var1=mins1-100;
		cost=25+(mins*0.10)+(var1*0.05);
		cout<<"Your account no. is="<<account<<endl;
		cout<<"your service is premium";
		cout<<"minutes="<<mins<<endl;
		cout<<"total bill="<<cost<<endl;
	}
	else
		cout<<"Your input is invalid."<<endl;
	
	return 0;
}
