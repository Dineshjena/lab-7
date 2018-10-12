//including in the library
#include <iostream>
using namespace std;
int reverse(int n,int m){
	//giving the wanted conditions
	if(n==0){
	return m;}
	//storing the reverse of the number
	else{
	m=(m*10)+(n%10);
	return reverse(n/10,m);}}

int main(){
	int n;
	//asking a number to the user
	cout<<"type a number : ";cin>>n;
	int m = reverse(n,0);cout<<endl;
	//printing the condition required
	if(m==n){
	cout<<"The number "<<n<<" is palindromic"<<endl;
}
	else{
	cout<<"The number "<<n<< " is not palindromic"<<endl;
}
return 0;

}

