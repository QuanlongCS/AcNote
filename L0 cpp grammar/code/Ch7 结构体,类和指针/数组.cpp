#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int a[5]={3,2,1,3,0};
	cout<<a<<endl;//0xfdaafff9d0
	
	int* p = a;
	//变量类型[*] 变量名 = 地址;
	cout<<1;
	cout<<*(p)<<endl;//a[2]==*(p+2)
	
	return 0;
}
