#include <iostream>
using namespace std;
int main()
{
	int amt, item;
	
	cout<<"Enter total amount present : ";
	cin>>amt;
	cout<<"Enter price of ITEM : ";
	cin>>item;
	
	if(amt>=item)
	{
		cout<<"You can buy Item"<<endl;
	}
	else
	{
		cout<<"You cant buy Item"<<endl;
	}
	

 	return 0;
}
