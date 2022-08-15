#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int s;
	cin>>s;
	
	if(s>=85) 
		cout<<"A";
	else if(s>=70 && s<85)
		cout<<"B";
	else if(s>=60 && s<70)
		cout<<"C";
	else
		cout<<"D";	

	return 0;
}

