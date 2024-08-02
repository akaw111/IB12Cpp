#include <iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter char : ";
	cin>>a;
	
	if(a>=65 and a<=90)
	{
		cout<<"Capital ltr"<<endl;
	}
	else if(a>=97 and a<=122)
	{
		cout<<"Small ltr"<<endl;
	}
	else if(a>=48 and a<=57)
	{
		cout<<"NUMBER"<<endl;
	}
	else
	{
		cout<<"Spcl char"<<endl;
	}

 	return 0;
}
