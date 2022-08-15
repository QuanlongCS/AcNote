#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string s4 = s4 + ", ";  // 正确：把一个string对象和有一个字面值相加
	string s5 = "hello" + ", "; // 错误：两个运算对象都不是string
	
	string s6 = s4 + ", " + "world";  // 正确，每个加法运算都有一个运算符是string
	string s7 = "hello" + ", " + s4;  // 错误：不能把字面值直接相加，运算是从左到右进行的
	
	return 0;
}
