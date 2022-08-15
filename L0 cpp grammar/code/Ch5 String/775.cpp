#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){

	string str[110];
	int n=0;
	while(cin>>str[n])
		n++;
	for(int i=n-1;i>=0;i--)
		cout<<str[i]<<' ';
	cout<<endl;
	
	return 0;
}
