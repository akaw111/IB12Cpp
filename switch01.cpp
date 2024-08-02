#include <iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"Enter your choice";
	cin>>ch;
	
	switch(ch)
	{
		case 3:{
			cout<<"2day";
			break;
		}
		case 1:{
			cout<<"Tomorrow";
			break;
		}
		case 9:{
			cout<<"Yesterday";
			break;
		}
		default:
			{
				cout<<"Wrong input ";
			}
	}

 	return 0;
}
