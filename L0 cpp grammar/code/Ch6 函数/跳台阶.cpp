#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int n;
int ans;

void f(int k){//
	if(k==n)
		ans++;
	else if(k<n){
		f(k+1);
		f(k+2);
	}
}

int main(){
	
	cin>>n;
	f(0);

	return 0;
}
