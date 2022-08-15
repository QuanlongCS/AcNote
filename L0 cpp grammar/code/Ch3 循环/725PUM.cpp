#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin>n>>m;
	
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int i=1;i<=m;i++){
			if(cnt%4==0){
				cout<<PUM<<endl;
			}else{
				cnt+=1;
				cout<<cnt<<end;				
			}
		}
	}
	
	
	
	
	return 0;
}
