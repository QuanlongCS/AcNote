#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	int in,out;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x>=10 && x<=20){
			++in;
		}else
			++out;
	}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	
	
	
	
	return 0;
}
