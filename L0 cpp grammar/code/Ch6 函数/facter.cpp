#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int factor(int n){

	if(n<=2)
		return n;
	return n*factor(n-1);
	
}
int main(){
	
	int n;
	cin>>n;
	
	cout<<factor(n)<<endl;
	
	return 0;
}
