#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int max(int a,int b){
	if(a>b)return a;
	return b;
}
int main(){
	
	int a,b;
	cin>>a>>b;
	cout<<max(a,b);
	
	
	
	return 0;
}
