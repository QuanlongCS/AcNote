#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	string a,b;
	while(cin>>a>>b){
		int flat=0;
		for(int i=1;i<a.size();i++){
			if(a[i]>a[flat]){//设置a[0]为max, 逐个对比之后的字符,较大者更新为max
				flat=i;//这里flat只是存的a[i]的位置
			}
		}
		
		
		cout<<a.substr(0,p)+b+a.substr(p)<<endl;
		
		
	}
	
	
	
	
	return 0;
}
