#include <cstdio>
#include <iostream>
using namespace std;
double m[12][12];
int main(){
	
	char c;
	cin>>c;
	double sum=0;
	
	
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>m[i][j];
		}
	}
	
	int cnt=0;

	for(int i=1;i<=5;i++){
		for(int j=12-i;j<=11;j++){
			sum+=m[i][j];
			cnt++;
		}
	}

	for(int i=6;i<=10;i++){
		for(int j=i+1;j<=11;j++){
			sum+=m[i][j];
			cnt++;
		}
	}

	
	
	if(c=='S'){
		printf("%.1f",sum);
	}else
		printf("%.1f",sum/cnt);
	
	
	
	return 0;
}
