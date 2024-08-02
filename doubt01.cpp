#include <iostream>
using namespace std;
int main()
{ float a;
cout<<"Enter the age :- ";
cin>>a;
if (a<0){
	cout<<"Yet to be born";
}
else if (a<11){
	cout<<"You are child";
}
else if (a<18){
	cout<<"You are Teen";
}
else if (a<45){
	cout<<"You are Young";
}
else if (a<60){
	cout<<"You are Experienced";
}
else {
	cout<<"you Dead bro";
}


	return 0;
}