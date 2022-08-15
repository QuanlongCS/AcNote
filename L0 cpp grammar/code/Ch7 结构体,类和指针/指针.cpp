#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
char a,b;
int main(){
	char c='a',d='c';
	
	printf("%p %p\n",&c,&d);
	//000000bca35ffc1f 
	//000000bca35ffc1e
	//栈空间从上往下分配
	
	printf("%p %p",&a,&b);
	//00007ff79982c030 
	//00007ff79982c031
	//开在全局变量的地址是顺序,从下往上
	return 0;
}
