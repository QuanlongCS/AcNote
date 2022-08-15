#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

void print(int a[10][10]){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			a[i][j]+=10;
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
			
	}
	
}

int main(){
	
	int a[10][10];
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
		a[i][j]=j;
	print(a);
	
	
	
	
	return 0;
}
