#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string words="abcdefghijklmnopqrstuvwxyz";
int cnts[25];
int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		memset(cnts,0,100);
		
	
		for(int j=0;j<s.size();j++){
			for(int k=0;k<words.size();k++){
				if(s[j]==words[k]){
					cnts[k]++;
				}
			}
		}
		
		int f=0;
		for(int l=1;l<25;l++){
			if(cnts[l]>cnts[f])
				f=l;
		}
		
		cout<<words[f]<<' '<<cnts[f]<<endl;
		
		
	}
	
	
	return 0;
}
