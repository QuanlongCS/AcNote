#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	double k;
	string a,b;
	cin>>k>>a>>b;
	
	int len =a.size();//hello 5
	
	int cnt=0;
	for(int i=0;i<len;i++){
		if(a[i]==b[i])
			cnt++;	
	}
	
	if((double)cnt/len >=k)
		puts("yes");
	else
		puts("no");
		
	

	return 0;
}
