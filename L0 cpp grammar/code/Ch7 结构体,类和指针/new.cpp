#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
struct Node{
	int data;//数据域
	Node* next;//指针域
};
int main(){
	int* p = new int;
	Node* p2 = new Node;
	//分配一块该类性的内存空间. 并返回对应类型指针
	
	delete(p);//效果与free类似, 但是new和delete必须要成对出现
	delete(p2);
	
	
	return 0;
}
