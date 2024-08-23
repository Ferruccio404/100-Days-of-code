#include<iostream>
using namespace std;
class stack{
	public:
	int *arr;
	int size;
	int top;
stack(int a){
	
	size=a;
	arr= new int(a);
	top=-1;
	}
void push(int b){
	if(size-top>1){
		top++;
		arr[top]=b;
	}
	else{
		cout<<"Overflow";
	}
}
void pop(){
	if(top>=0){
		int trash;
		trash=arr[top];
		top--;
		cout<<trash<<" was removed from stack";
		
	}
	else{
		cout<<"underflow";
	}
}
void peek(){
	if(top>=0){
		cout<<arr[top];
	}
	else{
		cout<<"Stack's empty";
	}
}	
};
int main(){
	char inp;
	char inpt;
	do{ do{
	
		cout<<"Welcome to the stack menu driven :)";
		cout<<endl;
		int a;
		cout<<"Please enter the size of stack ";
		cin>>a;
		stack s1(a);
		do{
		
		cout<<"Operations on stack are"<<endl;
		cout<<"1. push "<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.peek"<<endl;
		
		int b;
		cout<"enter your choice";
		cin>>b;
		if(b==1){
			int ps;
			cout<<"Enter elements to be pushed";
			cin>>ps;
			for(int i=1;i<ps+1;i++){
				int psp;
				cout<<"Enter the "<<i<<" element to be pushed";
				cin>>psp;
				s1.push(psp);
			}
			}
		else if(b==2){
			s1.pop();
		}
		else if(b==3){
			s1.peek();
		}
		else{
			cout<<"enter a valid operation";
		}
		
		cout<<"Do you want to continue operations on this stack or want to create new stack or want to exit(new stack-n,continue-c,exit=e;)";
		cin>>inpt;}while(inpt=='c');
		
	}while(inpt=='n');}while(inpt!='e');
}
