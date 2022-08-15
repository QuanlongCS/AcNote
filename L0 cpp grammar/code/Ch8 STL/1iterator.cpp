#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	for(int i=0;i<5;i++){
		v.push_back(i);
	}
	//vector迭代器不支持it<v.end()
	for(vector<int>::iterator it = v.begin();it!=v.end();it++){
		//auto it = v.begin
		cout<<*it<<' ';
	}
	
	cout<<endl<<v[2]<<"_"<<*(v.begin()+2);
	
	
	return 0;
}
