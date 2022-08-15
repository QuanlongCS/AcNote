#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct Node{
	int data;//数据域
	Node* next;//指针域
};

Node* create (int Array[]){
	Node *p, *pre, *head;
	
	head = new Node;//head node
	head->next=NULL;//
	pre = head;//
	
	for(int i=0;i<5;i++){
		p= new Node;
		p->data=Array[i];
		p->next=NULL;
		
		pre->next = p;//将前一个node指向新建node
		pre = p;//将新建node设为pre,供下次使用
	}
		
	return head;//返回head node
}

int search(Node* head, int x){//累计x的个数
	int cnt =0 ;
	Node* p = head->next;
	
	while(p){
		if(p->data==x){
			cnt++;
		}
		p=p->next;
	}
	
	return cnt;
}

void insert(Node* head, int pos, int x){//1 2 [3] 4 5第三个位置插入x即 1 2 [x] 3 4 5
	Node* p = head; //操作node
	for(int i=1;i<pos;i++){//
		p=p->next;
	}
	
	Node* q = new Node;
	
	q->data = x;
	q->next = p->next;//核心代码: 1先换尾 把新node的next指向 原本的后继node(p->next)
	p->next = q;//2再接头把p->next指向新node
}

void del(Node* head, int x){//删除出现x的节点
	Node* p = head->next;
	Node* pre = head;
	
	while(p){
		if(p->data == x){
			pre->next=p->next;//第一元素指向第三个元素
			delete(p);//删除第二
			p=pre->next;//pre.next已经指向了第三个元素, 让他成为第二个元素
		}else{
			pre=p;
			p=p->next;
		}
	}
		
}

//--------------------
int main(){
	int Array[5]={3,1,5,3,2};
	Node* L = create(Array);//传进去数组, 并返回头结点(已建链表)
	//此时L=head, 而head是NULL
	
	Node* p = L->next;//书中直接使用L进行遍历的, 我多加一步防止没法再次遍历
	while(p){
		
		cout<<p->data<<' ';
		p=p->next;
	}
	
	cout<<endl<<"x shows "<<search(L,3)<<" times"<<endl;
	
	insert(L,3,0);
	p = L->next;//书中直接使用L进行遍历的, 我多加一步防止没法再次遍历
	while(p){
		
		cout<<p->data<<' ';
		p=p->next;
	}
	cout<<endl;
	
	del(L,0);
	p = L->next;//
	while(p){
		
		cout<<p->data<<' ';
		p=p->next;
	}
	return 0;
}
