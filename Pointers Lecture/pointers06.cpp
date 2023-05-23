#include <stdio.h>

void myFunc(int *num){	//declaring a pointer as input argument
	*num += 5;
}

int main(){
	int x = 10;			//declare x as a variable
	
	printf("x is %d\n", x);
	myFunc(&x);			//passing the address of x
	printf("x is %d", x);
	
	return 0;
}
