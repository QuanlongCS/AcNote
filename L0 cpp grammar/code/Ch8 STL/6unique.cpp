#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;

bool cmp(int a,int b){
	return a<b;
}

int main(){
	int arr[]={1,1,2,1,3,4};
	
	//cout<< unique(arr,arr+5  )-arr<<endl;
	srand(time(0));
	random_shuffle(arr,arr+6);
	
	for(int i:arr)
		cout<<i<<' ';
	cout<<endl;
	
	sort(arr,arr+6,cmp);
	
	for(int i:arr)
		cout<<i<<' ';
	cout<<endl;
	
	
	return 0;
}
