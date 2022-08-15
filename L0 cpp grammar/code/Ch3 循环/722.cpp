#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
	int a,n;
	cin>>a;
	cin>>n;
	while(n<=0){
		//TODO
		cin>>n;
	}
	
	int sum=0;
	for(int i=a;i<=n;i++){
		sum+=i;
	}
	
	cout<<sum;
	
	
	
	return 0;
}
