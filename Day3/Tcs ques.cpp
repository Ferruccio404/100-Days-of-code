#include<iostream>
using namespace std;
void cube(int a,int b){
	int sum=0;
	for(int i=a;i<b+1;i++){
		sum=sum+(i*i*i);
	}
	cout<<"Sum of numbers between "<<a<<" and "<<b<<"are "<<sum;
}
int main(){
	int a,b;
	cout<<"Please enter first num: ";
	cin>>a;
	cout<<"Please enter second num: ";
	cin>>b;
	cube(a,b);
	
}
