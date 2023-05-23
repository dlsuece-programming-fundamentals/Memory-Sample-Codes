#include <stdio.h>

int main(){
	int var = 10;		//declare var as a variable
	int &ref = var;		//declare ref as a reference to var
	
	printf("var is %d\n", var);
	printf("var is stored at %x\n", &var);
	printf("ref is %d\n", ref);
	printf("ref is stored at %x\n", &ref);
	
	return 0;
}
