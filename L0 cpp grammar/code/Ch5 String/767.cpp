#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	
	for(auto &c:s){
		if((c>='a' && c<='z') || (c>='A' && c<='Z') ){
			if(c=='z'){
				c='a';
			}else if(c=='Z'){
				c='A';
			}else
				c=c+1;
		}
	}
	
	cout<<s;
	
	
	return 0;
}
