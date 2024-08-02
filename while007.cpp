#include <iostream>
using namespace std;
int main()
{
	int i  =101;
	int c =0;
	int n=1;
	while(n<=i)
	{
		if(i%n==0)
		{
			c++;
		}
		n++;
	}
	if(c==2)
	{
		cout<<"Number is Prime, no of factors "<<c;
	}
	else
	{
		cout<<"Number is Not Prime, no of factors "<<c;
	}

 	return 0;
}
