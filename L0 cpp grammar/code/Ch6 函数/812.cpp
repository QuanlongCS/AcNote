#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
const int N = 1010;
void print(int a[], int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	
}
int main(){
	int a[N];
	int n,size;
	cin>>n>>size;
	
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	
	print(int a[], int size);
	
	
	
	
	return 0;
}
