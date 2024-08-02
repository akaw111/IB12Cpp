#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x = 2;
	float n = 2;
	float i=0;
	float fact=1;
	float ans=0;
	
	while(i<=n)
	{
		ans = ans + pow(x,i);
		
		if(i==0 or i==1)
		{
			ans = ans/1;
		}
		else
		{
			float t=1;
			while(t<=i)
			{
				fact =fact * t;
				t++;
			}
			
		}
		ans = ans/fact;
		cout<<ans<<endl;
		i++;
	}
	
	cout<<"ANSWER is "<<ans<<endl;
	

 	return 0;
}
