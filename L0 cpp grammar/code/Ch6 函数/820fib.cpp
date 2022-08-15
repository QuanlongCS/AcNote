#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int fib(int n){// 1 1 2 3 5
	if(n==1 || n==2)
		return 1;
	return fib(n-1)+fib(n-2);
}

int main(){
	int n;
	cin>>n;
	
	cout<<fib(n);
	
	
	
	
	return 0;
}
