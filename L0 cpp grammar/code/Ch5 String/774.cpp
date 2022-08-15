#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s,res;

	while(cin>>s){
		if(s.back()=='.')
			s.pop_back();
		if(s.size() > res.size())
			res=s;
		
	}
	
	cout<<res<<endl;
	
	
	
	return 0;
}
