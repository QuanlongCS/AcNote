#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	float sum=0.0;
	float coney,rat,frog;
	for(int i=1;i<=n;i++){
		int a;
		char T;
		scanf("%d %c",&a,&T);
		if(T=='c'){
			coney += a; 
		}else if(T='R'){
			rat+=a;
		}else if(T='F'){
			frog+=a;
		}
	
	}
	
	sum=coney+rat+frog;
	cout<<sum<<endl;
	cout<<coney<<" ";
	cout<<rat<<" ";
	cout<<frog<<endl;
	
	printf("Percentage of coneys: %.2f %",coney/sum);
	printf("Percentage of coneys: %.2f %",rat/sum);
	printf("Percentage of coneys: %.2f %",frog/sum);
	return 0;
}
