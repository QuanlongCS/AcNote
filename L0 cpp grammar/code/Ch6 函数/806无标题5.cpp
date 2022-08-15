#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

double add(double x, double y){
	double res=0.0;
	res=x+y;
	
	return res;
}

int main(){
	double a,b;
	cin>>a>>b;
	
	printf("%.2f",add(a,b));

	return 0;
}
