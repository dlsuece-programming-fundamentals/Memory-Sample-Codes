#include <stdio.h>

int main(){
	int var = 10, *pnt;
	pnt = &var;					//pnt points to the address of var
	
	printf("pnt = %lx\n", (unsigned long) pnt);	//pnt holds the address of var
	printf("*pnt = %d", *pnt);	//*pnt will show the value of var
	
	return 0;
}
