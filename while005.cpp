#include <iostream>
using namespace std;
int main()
{
	int u,l;
	cout<<"Enter LL : ";
	cin>>l;
	cout<<"Enter UL : ";
	cin>>u;

	while(l<=u)
	{
		if(l%2==1)
		{
			cout<<l<<endl;
		}
		l++;
	}

 	return 0;
}
