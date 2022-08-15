#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){//a = 97+24=121; A=65+24=89
//	char a='a';
//	cout<<char(a-32);
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	
	for(auto &c:s1)
		if(c>=97 && c<=121)
			c=c-32;	
		
	for(auto &c:s2)
		if(c>=97 && c<=121)
			c=c-32;	
	
	
	if(s1==s2){
		cout<<'=';
	}else if(s1>s2){
		cout<<'>';
	}else
		cout<<'<';
	
	
	return 0;
}
