#include <cstdio>
#include <iostream>
using namespace std;
double m[12][12];


int main(){
	double sum=0;
	char c;
	cin>>c;
	int cnt=0;


	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>m[i][j];
			
		}
	}
	
	for(int i=0;i<12;i++){
		for(int j=0;j<=10-i;j++){
			cnt++;
			sum+=m[i][j];
		}
	}

	if(c=='S'){
		printf("%.1f",sum);
	}else
		printf("%.1f",sum/cnt);
	
	

	return 0;
}
