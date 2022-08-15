#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
//----------------------------
int foo(int n){//形参
	int res=1;
	for(int i=1;i<=n;i++){
		res *=i;
	}
	return res;
}
//----------------------------
int main(){
	
	cout<<foo(3);//3*2*1
			//实参
	
	
	return 0;
}
