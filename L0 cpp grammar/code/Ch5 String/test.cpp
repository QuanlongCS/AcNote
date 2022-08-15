#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	char c='a';
//	cout<<(int)c<<endl;
	//97
	
	int n=97;
//	cout<<char(n)<<endl;
	//a	

	char str[100];
	fgets(str,100,stdin);
//	注意fgets不会删除行末的回车字符

	cout<<str<<endl;//输出时最后一行有换行符
	



	return 0;
}
