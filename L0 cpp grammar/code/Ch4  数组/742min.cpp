#include <cstdio>
#include <iostream>
using namespace std;
int n;
	
int main(){
	cin>>n;
	int x[n];
	
	int f=0;
	int min=1001;
	
	for(int i=0;i<n;i++){
		cin>>x[i];
		if(x[i]<min){
			min=x[i];
			f=i;
		}
	}
	
	
	printf("Minimum value: %d\n",min);
	printf("Position: %d",f);
	
	return 0;
}
