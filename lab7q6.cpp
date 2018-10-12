//including in the library
#include <iostream>
using namespace std;
int reverse(int n){
	//providing the required conditions
	if(n==0){
	return 0;}
	//reversing the number
	else{
	cout<<n%10;
	return reverse(n/10);}

}
int main(){
	int n;
	//asking a number to the user
	cout<<"type a number : ";cin>>n;
	reverse(n);cout<<endl;
return 0;

}
