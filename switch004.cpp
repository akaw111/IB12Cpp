#include <iostream>
using namespace std;
int main()
{
	char n;
	cout<<"Enter char : ";
	cin>>n;
	
	switch(n>=65 and n<=90)
	{
		case 1:{
			cout<<"Cap ltr";
			break;
		}
		case 0:{
			switch(n>=97 && n<=122)
			{
				case 1:{
					cout<<" SML LTR";
					break;
				}
				case 0:{
					switch(n>=48 and n<=57)
					{
						case 1:{
							cout<<"Nums";
							break;
						}
						case 0:{
							cout<<"Spcl Char";
							break;
						}
							break;
						}
					}
					break;
				}
			}
			break;
		}
	

 	return 0;
}
