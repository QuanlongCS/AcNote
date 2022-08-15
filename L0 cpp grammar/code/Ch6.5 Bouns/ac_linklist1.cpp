#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
struct Node{
	int val;
	Node* next;
};

int main(){
	Node* p = new Node;
	p->val=11;
	Node* q = new Node;
	q->val=22;
	
	p->next = q;
	q->next=NULL;
	
	while(p){
		cout<<p->val<<" ";
		p=p->next;
	}
	
	return 0;
}
