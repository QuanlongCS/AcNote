#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

char a[100000];
int n[100000];

int main(){
	
	cin>>a;
	for(int i=97;i<=122;i++){
		n[i]=i;
	}
	
	int len=strlen(a);
	for(int i=0;i<len;i++){
		int t=a[i];
		n[t]++;
	}
		


	for(int i=97;i<=122;i++){
		if(n[i]-97==1){
			cout<<(char)i;
			return 0;
		}
	}
	cout<<"no";
	
	return 0;
}
