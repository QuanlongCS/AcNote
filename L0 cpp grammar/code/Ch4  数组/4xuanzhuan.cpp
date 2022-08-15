#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
	int n,k;
	int a[10010];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//1 2 3 4 5
	
	for(int i=n-k;i<n;i++)
		cout<<a[i]<<' ';
	for(int i=0;i<=k;i++)
		cout<<a[i]<<' ';
	
	
	
	
	
	return 0;
}
