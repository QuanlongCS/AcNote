#include <cstdio>
#include <iostream>
#include <string>
using namespace std;


int main(){
	int a=10;
	cout<<&a<<endl;
	int* p = &a;
	cout<<p<<endl;//输出一串地址
	
	int** p2=&p;
	cout<<p2<<endl;
	
	int*** p3 = &p2;
	cout<<p3<<endl;
	
	/**
	 * 0xe78d1ffa34
	  0xe78d1ffa28
	  0xe78d1ffa20
	 */
	return 0;
}
