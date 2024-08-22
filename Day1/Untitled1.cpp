#include<iostream>
using namespace std;
void max(int arr[],int size){
	int max=INT_MIN;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
	}
	}
	cout<<max;
	}
void min(int arr[],int size){
	int min=INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
	}
	}
	cout<<min;
	}
int main(){
	int arr[5]={4,5,6,7,8};
	int size=5;
	max(arr,size);
}
