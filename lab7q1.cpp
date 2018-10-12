//including in the library
#include <iostream>
using namespace std;
//function inside another function
int number_Power(int base, int power){
	//conditions for the function to be executed
	if(power==0){	
	return 1;}
	//this is more or less similar to looping conditions
	else {
	return base*number_Power(base,power-1);}}

int main (){
	int base; int power;
	//asking user for a number they want.
	cout <<"Enter the base : ";
	cin>>base;cout<<endl;
	cout <<"Enter the power : ";
	cin>>power;cout<<endl;
	//the result is
	cout<<base<<"^"<<power<<" is "<</*calling function*/number_Power(base,power)<<endl;
return 0;
}

