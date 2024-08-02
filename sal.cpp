#include <iostream>
using namespace std;
int main()
{
	float bs,da,ta,hra,pf,tax=0,gs;
	cout<<"Enter the salary of employee: ";
	cin>>bs;
	da = bs*0.4;
	ta = bs*0.15;
	hra = bs*0.2;
	pf = bs*0.12;
	
	gs = bs+da+ta+hra-pf;
	
	if(gs>100000)
	{
		tax =  (gs*0.1);
		//gs = gs - tax;
		cout<<"Gross without tax : "<<gs<<endl;
		gs = gs - tax;
		cout<<"Gross Sal : "<<gs<<endl;
		cout<<"BS Sal : "<<bs<<endl;
		cout<<"TA Sal : "<<ta<<endl;
		cout<<"HRA Sal : "<<hra<<endl;
		cout<<"DA Sal : "<<da<<endl;
		cout<<"PF Sal : "<<pf<<endl;
		cout<<"TAX : "<<tax<<endl;
		
		
		
	}
	else
	{
	
		cout<<"Gross Sal : "<<gs<<endl;
		cout<<"BS Sal : "<<bs<<endl;
		cout<<"TA Sal : "<<ta<<endl;
		cout<<"HRA Sal : "<<hra<<endl;
		cout<<"DA Sal : "<<da<<endl;
		cout<<"PF Sal : "<<pf<<endl;
		cout<<"TAX : "<<tax<<endl;
	}
	
	

 	return 0;
}
