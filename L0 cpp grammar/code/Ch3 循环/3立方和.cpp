#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
/*	do{
		//TODO
	}while(1);

	for(int i=0;i<=0;i++){
		//TODO
	}
	
	while(1){
		//TODO
	}

	int s=0;
	for(int i=1;i<=100;i++){
		s+=i*i*i;
	}
	cout<<s;
*/

	int a=1,b=1;
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int c=a+b;
		a=b;
		b=c;
	}
	cout<<a;

  return 0;
}
