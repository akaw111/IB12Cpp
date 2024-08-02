#include <iostream>
using namespace std;
int main()
{
	int fact=1;
	int n=6;
	int i=1;
	while(i<=n)
	{
		fact = fact * i;
		i++;
	}
	cout<<fact;
	

 	return 0;
}
