#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
/*
  1.结构体的定义变量名首字母大写
 */
struct Node{
	int data;//数据域
	Node* next;//指针域
};

int main(){
	Node* n1 = new Node;
	Node* n2 = new Node;
	Node* n3 = new Node;
	Node* n4 = new Node;
	Node* n5 = new Node;
	
	n1->data =1;
	n1->next=n2;
	n2->data =2;
	n2->next=n3;
	n3->data =3;
	n3->next=n4;
	n4->data =4;
	n4->next=n5;
	n5->data =5;
	n5->next=NULL;//最后一个node指向空
	

	
	
	return 0;
}
