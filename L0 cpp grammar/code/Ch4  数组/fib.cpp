#include <cstdio>
#include <iostream>
using namespace std;

long long int fib[66];
int main(){

	int n,t;
	cin>>t;
	fib[0]=0;
	fib[1]=1;
	
	for(int j=0;j<t;j++){
		cin>>n;
		if(n==0||n==1){
			printf("Fib(%d) = %d\n",n,n);
		}else{
			
			for(int i=2;i<=n;i++){
				fib[i]=fib[i-1]+fib[i-2];
			}
			printf("Fib(%d) = %lld\n",n,fib[n]);
			
		}
		
		
		
	}
	
	
	return 0;
}
