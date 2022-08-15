#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	vector<int> a({1,2,3,4,5});
	reverse(a.begin(),a.end());
	
	int arr[]={1,2,3,4,5};
	reverse(arr+1,arr+5);//1 5 4 3 2
	
	for(int i:arr){
		cout<<i<<' ';
	}
	cout<<endl;
	
	
	
	return 0;
}
