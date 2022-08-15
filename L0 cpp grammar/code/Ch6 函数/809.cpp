#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int lcm(int a, int b){
	
	for(int i=1;i<=1000000;i++){
		if(i%a==0 && i%b==0 && i>=a && i>=b){
			return i;
		}
	}
	
	 
}

int main(){
	int a,b;
	cin>>a>>b;
	
	cout<<lcm(a,b);
	
	
	
	
	return 0;
}
