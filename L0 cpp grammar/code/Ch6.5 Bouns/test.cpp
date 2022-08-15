#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct Node{
	int data;//数据域
	Node* next;//指针域
};

Node* create(int array[]){
	Node* head = new Node;//
	head->next = NULL;
	Node* pre = head;
	
	for(int i=0;i<5;i++){
		Node* p = new Node;
		p->data = array[i];
		p->next = NULL;
		/***************/
		pre->next = p;
		pre = p;
		/***************/
	}	
	return head;
}

int search(Node* head, int x){//import head node
	int cnt=0;
	Node* p = head->next;
	
	while(p){
		if(p->data == x)
			cnt++;
		p=p->next;
	}
	return cnt;
}

void insert(Node* head, int pos, int x){// 3 1 [4] 
	Node* p = head;//从headnode开始操作而不是first node
	
	for(int i=1;i<pos;i++)// 1 2 [3]在3之前停下
		p=p->next;// [1] [2] 到达pos位置之前的位置
	
	Node* q = new Node;//新建node
	q->data = x;
	
	/********************/
	q->next = p->next;
	p->next = q;
	/********************/	
}

void del(Node* head, int x){//删除all出现x的节点	
	Node* p = head->next;//first node
	Node* pre = head;//初始前驱结点
	
		
	while(p){
		if(p->data == x){
			pre->next=p->next;//1直接指向3, 跨过2(待删除2也就是p)
			delete(p);
			p = pre->next;//恢复成[pre] [p] [p+1]...
		}else{//[pre] [p] [p+1]
			pre=p;
			p=p->next;
		}
	}

}

int main(){
	int array[5]= {3,1,4,4,5};
	Node* L = create(array);//1
	Node* p = L->next;
	
	while(p){
		cout<<p->data<<' ';
		p=p->next;
	}
	cout<<endl;
//	cout<<"after: "<<L->next->data<<endl; 此行代码可以得使用p node操作链表后L仍是head node
	
	cout<<"4 出现的次数 = "<<search(L,4)<<endl ;//2
	
	insert(L,3,0);
	p = L->next;
	while(p){
		cout<<p->data<<' ';
		p=p->next;
	}
	cout<<endl;
	
	del(L,0);
	p = L->next;
	while(p){
		cout<<p->data<<' ';
		p=p->next;
	}
	
	return 0;
}
