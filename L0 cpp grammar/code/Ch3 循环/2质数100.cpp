#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
		for(int i=2;i<=100;i++){
			bool flat = true;
			for(int j=2;j<i;j++){
				if(i%j==0){
					flat=false;
					break;
				}
			}
			if(flat)
				cout<<i<<" ";		
				
		}	
	return 0;
}
