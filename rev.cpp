#include <iostream>
using namespace std;
int main()
{
	int x= 1234;
	int rev = 0;
	int r;
	
	r = x%10;
	rev = rev*10 +r;
	x = x/10;
	r = x%10;
	rev = rev*10 +r;
	x = x/10;
	r = x%10;
	rev = rev*10 +r;
	x = x/10;
	r = x%10;
	rev = rev*10 +r;

	cout<<rev;
	
	

 	return 0;
}
