#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x = 2;
	float n = 5;
	float i=0;
	float fact=1;
	float ans=0;
	float pw=0;
	
	while(i<=n)
	{
		pw =  pow(x,i);
		fact=1;
		if(i==0 or i==1)
		{
			cout<<i<<">>>>"<<fact<<endl;
			ans = pw/fact;
		}
		else
		{
			float t=1;
			while(t<=i)
			{
				fact =fact * t;
				t++;
			}
			cout<<i<<">>>>"<<fact<<endl;
			ans += pw/fact;
		}
		
		cout<<ans<<endl;
		i++;
	}
	
	cout<<"Ans till "<<i<<": "<<ans<<endl;
	

 	return 0;
}
