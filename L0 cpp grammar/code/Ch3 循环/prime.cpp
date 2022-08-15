#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n,flat;
	cin>>n;
	while(n--){
		for(int i=2;i<n;i++){
			if(n%i==0){
				flat = 0;	
				break;
			}	
		}
		if(flat){
			printf("%d is prime\n");
		else	
			printf("%d is not prime\n");
		
	}
	
	
	
	
	return 0;
}
