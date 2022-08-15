#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//------------------------

struct Node{
	int data;//数据域
	Node* next;//指针域
};
int main(){
	int* p = (int*)malloc(sizeof(int));
	Node* p2 = (Node*)malloc(sizeof(Node));
	//以需要申请内存空间为参数(sizeof(int)==4), malloc就申请大小为4的空间,并且返回指向这块空间的指针
	
	//释放free
	free(p);//释放之后内存的确被释放, 但是指针指向空而不是消失
	free(p2);
	
	
	
	
	return 0;
}
