#include<iostream>
#include<string>
using namespace std;
int main(){
	string s, a, b, t, ans;
	getline(cin,s), getline(cin,a), getline(cin,b);
	int len = s.size();
	
	for(int i=0; i<len; i++){
		while(s[i]!=' ' && i < len){
			t += s[i];//暂时存储获得单词
			i++;
		}//以空格分割每一个单词
		if(t == a){//如果分割单词与单词a相同就相当于找到了You
			t = b;//将a替换为b
		}
		ans += t + ' ';//存储替换后的单词
		t = "";//情空
	}
	cout << ans;
	return 0;
}


