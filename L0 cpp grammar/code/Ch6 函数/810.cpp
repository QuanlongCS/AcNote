#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int abc(int x){
	
	if(x>0){
		return x;
	}
	return -x;
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<abc(n);
	
	
	
	return 0;
}
