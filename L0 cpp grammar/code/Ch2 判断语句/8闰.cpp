#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int year;
	cin>>year;
	
//	if(year%100==0){
//		if(year%400==0)cout<<"yes"<<endl;
//		else cout<<"no"<<endl;
//	}else {
//		if(year % 4==0)cout<<"yes"<<endl;
//		else cout<<"no"<<endl;
//	}
	
	if(year%100==0 && year%400==0 || year%4==0)
		cout<<"yes"<<endl;
	else cout<<"no"<<endl;

	return 0;
}

