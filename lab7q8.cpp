//including in the library
#include <iostream>
using namespace std;
int sum(int n){
	//conditions required :
	if(n==0){
	return 0;}
	//adding the sum of the digits of the number.
	else{
	return n%10 + sum(n/10);}

}
int main(){
	int n;
	//asking a number from the user
	cout<<"Type a number you like : ";cin>>n;
	cout<<endl;
	//call for the required function :
	cout<<"The sum of the digits of the number "<<n<<" is "<<sum(n)<<endl;
return 0;

}

