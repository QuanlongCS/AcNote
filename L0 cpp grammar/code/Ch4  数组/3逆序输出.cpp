#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n;
	int a[10010];
	
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=n-1;i>=0;i--){// 012345..n-1
		cout<<a[i]<<' ';
	}
	cout<<endl;
		
	
	
	return 0;
}
