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
	else if(per>=90)
	{
		cout<<"GRD is A+";
	}
	else if(per>=80)
	{
		cout<<"GRD is A";
	}
	else if(per>=70)
	{
		cout<<"GRD is B+";
	}
	else if(per>=60)
	{
		cout<<"GRD is B";
	}
	else if(per>=50)
	{
		cout<<"GRD is C+";
	}
	else if(per>=40)
	{
		cout<<"GRD is C";
	}
	else if(per>=34)
	{
		cout<<"GRD is S";
	}
	else
	{
		cout<<"Fail";
	}

 	return 0;
}
