#include <iostream>

using namespace std;

int main()
{
	int a = 10;
//	int &p = a;
	int* p = &a;//	int* p=地址
	cout<<*p;
//	p += 5;
	
	return 0;
}
