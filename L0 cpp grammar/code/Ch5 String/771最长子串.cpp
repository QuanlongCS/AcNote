#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	while(n--){
		int max = -1;
		string str,maxStr;
		cin>>str;
		for(int i=0;i<str.size();i++){
			int j = i;//双指针
			int cnt=0;//记录位置
		
			while( str[j]==str[i] && j<str.size() )
				j++,cnt++;//移动指针
			
			
			if(cnt>max)
				max=cnt,maxStr=str[i];//尾---头
			
			i=j-1;//
		}
		
		cout<<maxStr<<" "<<max<<endl;
	}
	
	
	
	
	return 0;
}
