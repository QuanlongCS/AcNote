#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int get_unique_count(int a[], int n){
	int cnt=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				cnt--;
				a[j]=-999993;
			}
			
		}
		
	}
	
	return cnt;
}
int main(){
	int a[1000];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	cout<<get_unique_count(a,n);
	
	
	
	return 0;
}
