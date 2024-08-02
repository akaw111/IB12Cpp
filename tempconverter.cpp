#include <iostream>
using namespace std;
int main()
{
	//(0°C × 9/5) + 32 = 32°F

	float c, f;
	
	cout<<"Enter the temp in CG ";
	cin>>c;
	
	f = c * (9.0/5.0) + 32;
	
	cout<<"Temp is "<<f<<" FH";

 	return 0;
}
