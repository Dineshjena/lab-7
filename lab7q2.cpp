//include im the library
#include <iostream>
using namespace std;
//function inside another function:
int number(int i,int n){
	//Providing the required conditions:
	if (i==n+1){
	return 0;}
	else {
	cout<<i<<endl;
	i++;
	return number(i,n);}
	
}

int main (){
	int n,i;
	//asking the user the question
	cout<<"Enter a natural number : ";
	cin>>n;
	//Call for the function
	number(1,n);
return 0;
}
