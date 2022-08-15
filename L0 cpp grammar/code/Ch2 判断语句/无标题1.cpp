#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
	int i=0;
	
	while(i<10){
		cout<<i<<endl;//0 ... 8 9 此时i=9 往下i++此时i=10, while判断后不满足i<10(i=10)
		i++;
	}
	
	return 0;
}
