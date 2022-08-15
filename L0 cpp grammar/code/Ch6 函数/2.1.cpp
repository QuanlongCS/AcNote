#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int f(int &x){
	
	
	x=0;
}

int max(int a,int b){
	if(a>b)return a;
	return b;
}

void swap(int &x,int &y){
	int t=x;
	x=y;
	y=t;

}
int main(){
	int a=10;
	f(a);
	cout<<a<<endl;//10
	int x,y;
	cin>>x>>y;
	cout<<"______"<<endl;
	cout<<max(x,y )<<endl;
	swap(x,y);
	cout<<x<<' '<<y<<endl;
	return 0;
}
