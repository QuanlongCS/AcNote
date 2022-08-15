#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n,x,y;
	cin>>n;
	int sum=0;
	
	if(x<y){
		int t=y;
		y=x;
		x=t;
		//TODO
	}
	
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		for(int i=x;i<y;i++){
			if(i%2==1){
				sum+=i;
			}
		}
		cout<<sum<<endl;
		
	}
	
	
	
	
	return 0;
}
