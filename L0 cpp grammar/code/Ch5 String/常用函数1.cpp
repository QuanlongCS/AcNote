#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char a[100]="Hello World123",b[100];
	//10+3+1('\0')
	cout<<strlen(a)<<endl;
	
	strcpy(b,a);
	cout<<b<<endl;
	
	cout<<strcmp(a,b)<<endl;
	
	return 0;
}
