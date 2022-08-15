#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct Person{
	int age, height;
	double money;
	
	Person(){
		
	}
	Person(int _age, int _height){//构造函数2
		age = _age;
		height = _height;
	}
	Person(int _age, int _height, double _money){//构造函数3
		age = _age;
		height = _height;
		money = _money;
	}
};

int main(){
	
	Person lql={18, 180,100.0};
	
	cout<<lql.money;
	
	return 0;
}
