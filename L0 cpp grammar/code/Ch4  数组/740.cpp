#include <cstdio>
#include <iostream>
using namespace std;

int a[20];

int main(){
	for(int i=0;i<20;i++){
		//TODO
		cin>>a[i];
	}
	int cnt=0;
	for(int i=19;i>=0;i--){
		printf("N[%d] = %d\n",cnt++,a[i]);
	}
	
	return 0;
}
