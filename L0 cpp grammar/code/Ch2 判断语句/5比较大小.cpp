#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int max,max2;
		
	if (a>b)  max=a;
	else max =b;
	
	if (max>c) max2=max;
	else max2 =c;
	
	cout<<max2;
	return 0;
}

