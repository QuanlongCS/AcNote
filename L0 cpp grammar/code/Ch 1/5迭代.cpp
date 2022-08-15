#include <cstdio>
#include <iostream>
using namespace std;

int main(){

	int a=1; int b=1;
	cout<<a<<' '<<b<<endl;
	int a1=a++;//对a进行自增1, 但是再a复现之前完成,如果a不再出现那么自增也不会运行 
	int b1=++b;
	cout<<a1<<' '<<b1;

	return 0;
}

