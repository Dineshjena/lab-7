//include in the library
#include <iostream>
using namespace std;
//function inside another function
int sum(int i){
	//providing the required conditions
	if(i==0){
		return 0;	
	}
	else {
	return i+sum(i-1);
	}
}


int main (){
	int n;
	//asking  the user any number he wantss
	cout<<"Enter a number: ";cin>>n;
	//printing the sum
	cout<<"The sum of the natural number to "<<n<<" is "<<sum(n)<<endl;
	return 0;
}
