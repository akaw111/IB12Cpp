#include <iostream>
using namespace std;
int main()
{
	int n,t,r,rev=0;
	
	cout<<"Enter number ";     //1234
	cin>>n;
	t = n;
	r = t%10;   //4
	rev = rev * 10 + r;   // 4
	t = t/10;   // 123
	r = t%10;    // 3
	rev = rev*10 +r;   // 43
	t =t/10;      // 12
	r = t%10;	  //2
	rev = rev * 10 +r;	// 432
	t = t/10;           //1
	r = t%10;			//1
	rev = rev *10 +r; 	//4321
	
	cout<<"Rev value is "<<rev<<endl;
	cout<<"orignal value "<<n<<endl;
	if(n==rev)
	{
		cout<<"No is plndrm";
	}
	else
	{
		cout<<"No is not plndrm";
	}
		
				
	
	
	
	
	
	

 	return 0;
}
