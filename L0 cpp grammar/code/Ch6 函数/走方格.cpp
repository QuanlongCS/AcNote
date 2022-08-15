#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n,m;
int res;


void f(int x, int y){
	if(x==n && y==m)
		res++;
	else{
		if(x<n)f(x+1,y);
		if(y<m)f(x,y+1);
	}
	
}

int main(){
	cin>>n>>m;
	f(0,0);
	cout<<res;
	
	
	
	
	return 0;
}
