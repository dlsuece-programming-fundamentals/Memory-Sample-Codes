#include <stdio.h>

int main(){
	int var = 10;
	
	printf("var = %d\n", var);	//This displays the value of var
	printf("&var = %lx", (unsigned long) &var);	//This displays the address of var
	
	return 0;
}
