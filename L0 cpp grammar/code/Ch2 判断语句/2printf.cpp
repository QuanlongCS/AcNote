#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	float f = 3.141511342;
	double d = 3.141121245225124;
	
	printf("%8.4f\n",f);
	printf("%-8.3lf\n",d);
	printf("%08.3lf\n",d);

	return 0;
}

