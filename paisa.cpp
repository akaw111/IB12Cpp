#include <iostream>
using namespace std;
int main()
{
	int n,r,t;
	cout<<"Enter Amount : ";
	cin>>n;
	t =n;
	
	r = n%500;
	t = n/500;
	cout<<"Rs. 500 x "<<t<<endl;
	n = n-(r*500);
	
	r = n%200;
	t = n/200;
	cout<<"Rs. 200 x "<<t<<endl;
	n = n-(r*200);
	
	r = n%100;
	t = n/100;
	cout<<"Rs. 100 x "<<t<<endl;
	n = n-(r*100);
	
	r = n%50;
	t = n/50;
	cout<<"Rs. 50 x "<<t<<endl;
	n = n-(r*50);
	
	r = n%20;
	t = n/20;
	cout<<"Rs. 20 x "<<t<<endl;
	n = n-(r*20);
	
	r = n%10;
	t = n/10;
	cout<<"Rs. 10 x "<<t<<endl;
	n = n-(r*10);
	
	r = n%5;
	t = n/5;
	cout<<"Rs. 5 x "<<t<<endl;
	n = n-(r*5);
	
	r = n%2;
	t = n/2;
	cout<<"Rs. 2 x "<<t<<endl;
	n = n-(r*2);
	
	r = n%1;
	t = n/1;
	cout<<"Rs. 1 x "<<t<<endl;
	n = n-(r*1);

 	return 0;
}
