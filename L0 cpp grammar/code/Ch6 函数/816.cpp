#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int swap(int &x,int &y){
	int t=x;
	x=y;
	y=t;
}

void reverse(int a[], int size){
	/**
	 * 0,size处设立2个指针,交换指针并前进(两指针不相遇时)
	 */
	for(int i=0,j=size-1;i<j;i++,j--){
		swap(a[i],a[j]);
	}
}
int main(){
	int a[1100];
	int n,size;
	cin>>n>>size;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	reverse(a,size);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	
	
	return 0;
}
