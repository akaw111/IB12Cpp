#include <iostream>
using namespace std;
int main()
{
	 float w,f,i,cm,m,bmi;
	 cout<<"Enter weight: ";
	 cin>>w;
	 cout<<"Enter Height int Feet: ";
	 cin>>f;
	 cout<<"Enter Height int inch: ";
	 cin>>i;
	 cm = ((f*12)+i)*2.54;
	 m = cm/100;
	 
	 bmi = w/(m*m);
	 
	 cout<<"BMI IS: "<<bmi<<endl;
	 
	 if(bmi>24)
	 {
	 	cout<<"OVER Weight";
	 }
	 if(bmi<18)
	 {
	 	cout<<"UNDER Weight";
	 }
	 if(bmi>18 && bmi <24)
	 {
	 	cout<<"NORMAL  Weight";
	 }
	 

 	return 0;
}
