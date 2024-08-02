#include <iostream>
using namespace std;
int main()
{
	int n = 12345;
	int rev=0;
	int r;
	
	while(n>0)
	{
		r = n%10;
		rev = rev * 10 + r;
		n = n/10;
	}

cout<<"REV is "<<rev;
 	return 0;
}
