#include <cstdio>
#include <iostream>
using namespace std;
double m[12][12];

int main(){
	
	int n;
	char c;
	double sum=0.0;
	cin>>n>>c;

	
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>m[i][j];		
			if(j==n){
				sum+=m[i][j];
				
			}
		}
	}	
	
	if(c=='S'){
		printf("%.1f",sum);
	}else{
		printf("%.1f",sum/12);
	}
	
	
	
	return 0;
}
