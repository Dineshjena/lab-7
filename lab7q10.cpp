//include in the library.
#include <iostream>
using namespace std;
int fib(int n){
	//the required conditions are then given .
	if(n==1){
	return 0;}
	if(n==2){
	return 1;}
	//n-th term of fibonacci sequence.
	else{
	return fib(n-1)+fib(n-2);}
}


int main(){
	int a;
	//asking a number to the user.
	cout<<"Which term in Fibonacci sequence do you want?";
	cout<<endl;
	cin>>a;
	cout<<endl;
	//call for function :
	cout<<"The "<<a<<"th term of Fibonacci sequence is : "<<fib(a)<<endl;
return 0;

}
