#include <iostream>
using namespace std;
int main()
{
	int n,r,t,n500,n200,n100,n50,n20,n10,n5,n2,n1;
	cout<<"Enter Amount : ";
	cin>>n;
	t =n;
	n500 = t /500;
	t = t - n500*500;
	
	n200 = t /200;
	t = t - n200*200;
	
	n100 = t /100;
	t = t - n100*100;
	
	n50 = t /50;
	t = t - n50*50;
	
	n20 = t /20;
	t = t - n20*20;
	
	
	n10 = t /10;
	t = t - n10*10;
	
	n5 = t /5;
	t = t - n5*5;
	
	
	n2 = t /2;
	t = t - n2*2;
	
	
	n1 = t /1;
	t = t - n1*1;
	
	
	cout<<"500 x "<<n500<<endl;
	cout<<"200 x "<<n200<<endl;
	cout<<"100 x "<<n100<<endl;
	cout<<"50 x "<<n50<<endl;
	cout<<"20 x "<<n20<<endl;
	cout<<"10 x "<<n10<<endl;
	cout<<"5 x "<<n5<<endl;
	cout<<"2 x "<<n2<<endl;
	cout<<"1 x "<<n1<<endl;
	
	
	

 	return 0;
}
