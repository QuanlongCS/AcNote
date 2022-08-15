#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	while(n&&m){
		int Sum=0;
		
		if(n>m){
			int t = m;
			m=n;
			n=t;
		}	
	
		for(int i=n;i<=m;i++){
			printf("%d ",i);
			Sum+=i;
		}
		printf("Sum=%d\n",Sum);
			
		cin>>n>>m;
	}
	
	
	return 0;
}
