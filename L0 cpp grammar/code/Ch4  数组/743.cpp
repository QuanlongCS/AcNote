#include <cstdio>
#include <iostream>
using namespace std;

double a[12][12];

int main(){
	int row;
	char c;
	
	cin>>row;
	cin>>c;
	
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>a[i][j];
		}
	}
	
	
	double sum=0;
	
	for(int k=0;k<12;k++){
		sum+=a[row][k];
	}
	
	if(c=='S'){
		printf("%.1f",sum);	
		
	}else if(c=='M'){
		printf("%.1f",sum/12);
	}
	
	
//	cout<<-9.8 +6.6 +8.6+ 2.3+ 1.1+ -2.9+ 6.6-1.5 +2.1 -5.1+ 6.4 -7.5; = 6.9
	
	return 0;
}
