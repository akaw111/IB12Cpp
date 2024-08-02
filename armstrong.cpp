#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n ;
	cout<<"Enter the value of n ";
	cin>>n;
	int t = n;
	int cod =0;
	int r;
	int arm=0;
	
	while(t>0)
	{
		cod++;
		t=t/10;
	}
	t = n;
	while(t>0)
	{
		r = t%10;
		arm = arm + pow(r,cod);
		t = t/10;	
		
	}
	if(arm==n)
	{
		cout<<"Number is Bahubali";
	}
	else
	{
		cout<<"Number is not Bahubali";
	}
	
	
	

 	return 0;
}
