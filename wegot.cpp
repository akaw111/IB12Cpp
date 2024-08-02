#include <iostream>
using namespace std;
int main()
{ 	int n;
	cout<<"Entre num : ";
	cin>>n;
	
	if(n>0)
	{
		if(n%2==1)
		{
			if(n%5==0)
			{
				cout<<"We got the number";
			}
			else
			{
				cout<<"num is not div by 5" <<endl; 
			}
		}
		else
		{
			cout<<"num is even"<<endl;
		}
	}
	else
	{
		cout<<"-ve"<<endl;
	}

 	return 0;
}
