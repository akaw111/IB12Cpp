#include <iostream>
using namespace std;
int main()
{
	int f, i;
	float c;
	
	cout<<"Enter your Height int feet ";
	cin>>f;
	cout<<"Enter your Height int inch ";
	cin>>i;
	
	float h = (f*12) + i;
	cout<<"your Height is "<<h<<" inch "<<endl;
	 c = h*2.54;
	cout<<"your Height is "<<c<<" CM "<<endl;
	
	

 	return 0;
}
