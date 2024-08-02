#include <iostream>
using namespace std;
int main()
{
	int s,t;
	cout<<"Enter your seat number ";
	cin >>s;
	
	if(s<=0 || s>72)
	{
		cout<<"Wrong seat number"<<endl;
	}
	else
	{
		t = s%8;
	
	if(t==1 || t==4)
	{
		cout<<"Lower Brt"<<endl;
	}
	if(t==2 || t==5)
	{
		cout<<"mid Brt"<<endl;
	}
	if(t==3 || t==6)
	{
		cout<<"upr Brt"<<endl;
	}
	if(t==7)
	{
		cout<<"side Lower Brt"<<endl;
	}
	if(t==0)
	{
		cout<<"side upr Brt"<<endl;
	}

	}
	
 	return 0;
}
