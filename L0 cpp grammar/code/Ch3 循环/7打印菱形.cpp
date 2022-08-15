#include <cstdio>
#include <iostream>
using namespace std;

int main(){

/*	for (int i = 0, k = 1; i < 10; i ++ ){
		for (int j = 0; j < 10; j ++, k ++ ){
				cout << k << ' ';
		}
		cout << endl;
		}*/
	
	int n;
	cin>>n;
	int cx=n/2, cy=n/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(abs(i-cx)+abs(j-cy)<=n/2)
				cout<<"*";
			else	
				cout<<" ";
			}
		cout<<endl;
		
	}

		
	
	return 0;
}
