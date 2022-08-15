#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int n,m,Size;
void copy(int a[], int b[], int size1){
	for(int i=0;i<size1;i++)
		cout<<a[i]<<' ';
	for(int j=size1;j<m;j++){
		cout<<b[j]<<' ';
	}
}


int main(){
	

	cin>>n>>m>>Size;

	int a[110],b[110];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int j=0;j<m;j++)
		cin>>b[j];
	
	copy(a,b,Size);
	
	
	return 0;
}
