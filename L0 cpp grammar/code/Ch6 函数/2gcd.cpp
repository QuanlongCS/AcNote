#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int gcd(int a,int b){
	
	for(int i=1000;i>=2;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
		
}

int gcd2(int a,int b){
	if(a%b==0)
		return b;
	return gcd2(b,a%b);//12 16->> 16 12 >>12 4;
	//12%4==0, 发现最大公约数
	
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	
	
	
	
	
	return 0;
}
