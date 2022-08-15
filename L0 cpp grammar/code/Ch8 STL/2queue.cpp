#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
	queue<int> q;
	
	priority_queue<int> pq;//大根堆
	priority_queue<int, vector<int>, greater<int>> pq2;//小根堆
	
	q.push(1);//插入队尾
	q.push(2);
	q.push(3);
	cout<<q.front()<<'_'<<q.back()<<endl;//front队首元素, back返回队尾元素
	q.pop();//弹出队首,出队
	cout<<q.front()<<'_'<<q.back()<<endl;
	
	return 0;
}
