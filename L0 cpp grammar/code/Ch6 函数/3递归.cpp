#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int factor(int n){
	//1首先考虑结束条件, 否则会死循环
	if(n<=2){
		cout<<n<<'=';
		return n;
	}
	//2一般情况
	cout<<n<<'*';
	return n*factor(n-1);
}

int main(){
	int n;
	cin>>n;

	cout<<factor(n)<<endl;
	
	
	
	
	return 0;
}
