#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
	long long int t=1;
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
		t=t*2;
	
	printf("%ld",t);
	
	
	
	return 0;
}
