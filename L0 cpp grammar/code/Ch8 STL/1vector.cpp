#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	vector<int> b[233];//一维长233，二维长动态变化
	
	
	
	for(int i=0;i<5;i++){//in
		a.push_back(i);//在vector末尾添加i
	}
	
	vector<int>::iterator it = a.begin();//取a首元素地址, it指向其
	// 通过*it访问vector元素
	
	for(int i=0;i<5;i++)
		//cout<<a[i]<<' ';使用下标
		cout<<*(it+i)<<' ';//使用iterator
	cout<<endl;
	
	
	for(vector<int>::iterator it2 = a.begin();it2!=a.end();it2++){
		cout<<*(it2)<<' ';
	}
	return 0;
}
