#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int s =0;
	for(int i=1;i<=100;i++){
		if(i%2==1)
			continue;
		
		s+=i;
	}
	
	cout<<s<<endl;
		
	
	
	return 0;
}
