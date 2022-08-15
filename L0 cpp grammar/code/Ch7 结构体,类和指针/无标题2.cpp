#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int poo=24;
	printf("%d %p\n",poo,&poo);
//	24 000000549efff6ac
		
	int* ptr = &poo;
	printf("%d %p\n",*ptr,ptr);
	
	
	return 0;
}
