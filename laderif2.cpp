#include <iostream>
using namespace std;
int main()
{
	int p,c,m;
	float t,per;
	
	cout<<"Enter the marks of P :";
	cin>>p;
	cout<<"Enter the marks of C :";
	cin>>c;
	cout<<"Enter the marks of M :";
	cin>>m;
	
	t = p+c+m;
	per = t/3.0;
	
	cout<<"TTL is "<<t<<" % is "<<per<<endl;
	
	if(per <0  || per >100)
	{
		cout<<"Wrong Marks";
	}
	else if(per<35)
	{
		cout<<"GRD is Fail";
	}
	else if(per<40)
	{
		cout<<"GRD is S";
	}
	else if(per<50)
	{
		cout<<"GRD is C";
	}
	else if(per<60)
	{
		cout<<"GRD is C+";
	}
	else if(per<70)
	{
		cout<<"GRD is B";
	}
	else if(per<80)
	{
		cout<<"GRD is B+";
	}
	else if(per<90)
	{
		cout<<"GRD is A";
	}
	else
	{
		cout<<"GRD IS A++++";
	}

 	return 0;
}
