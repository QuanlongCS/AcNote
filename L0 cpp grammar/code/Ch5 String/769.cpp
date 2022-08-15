#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char str[35];
	cin>>str;
	
	char c;
	cin>>c;
	
	for(int i=0,len=strlen(str);i<=len;i++){
		if(c==str[i]){
			str[i]='#';
		}
	}
	
	cout<<str;
	
	
	
	return 0;
}
