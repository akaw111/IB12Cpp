#include <iostream>
using namespace std;
int main()
{
	int p,c,m;
	float t ,r;
	
	cout<<"Enter marks of P,C and M ";
	cin>>p>>c>>m;
	
	t = p+c+m;
	
	r = t/3.0;
	
	if(r>=50)
	{
		cout<<"Result is PASS"<<endl;
	}
	else
	{
		cout<<"Result is FAIL"<<endl;
	}
	
	
 	return 0;
}
