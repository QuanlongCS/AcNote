#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	
	
	for(int i=1;i<=n;i++){
		
		cin>>x;
		int sum=0;
		for(int j=1;i<x;i++){
			if(x%j==0){
				sum+=i;
			}
		}
		if(sum==x){
			printf("%d is perfect\n",x);
		}else{
			printf("%d is not perfect\n",x);
		}
		
	}
	
	
	
	
	
	return 0;
}
