#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){

	
	string s1;
	getline(cin,s1);
	string s2;
	
	for(int i=0;i<s1.size();i++){
		if( i==(s1.size()-1) ){
			s2+=s1[i]+s1[0];
		}else
			s2+=s1[i]+s1[i+1];
	}
	
	cout<<s2;
	
	
	return 0;
}
