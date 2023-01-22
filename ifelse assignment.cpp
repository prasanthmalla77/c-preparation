//c++ program to find if an integer is even or odd or  neighter(0) using nested if statements

#include<iostream>
#include<istream>
using namespace std;
 int main(){
 	int a;
 	int b;
 	cout<<"enter the value of a"<<endl;
 	cin>>a;
 	cout<<"enter the value of b"<<endl;
 	cin>>b;
 	if(a==0){
 		cout<<"entered value is zero that means neighter even nor odd"<<endl;
	 }
	else if(a%2==0){
	 	cout<<"entered value is even"<<endl;
	 	}
 	else{
 		cout<<"entered value is odd"<<endl;
	 }
	 return 0;
 }
