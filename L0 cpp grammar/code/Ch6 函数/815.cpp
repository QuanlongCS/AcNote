#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void print(char str[110]){
	cout<<str;
	
}

int main(){
	
	char str[110];
	fgets(str,110,stdin);//getline(cin,str);
	
	print(str);
	
	
	return 0;
}
