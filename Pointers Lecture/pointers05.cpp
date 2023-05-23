#include <stdio.h>

void myFunc(int &num){	//increments the input by 5
	num += 5;
}

int main(){
	int x = 10;			//declare x as a variable
	
	printf("x is %d\n", x);
	myFunc(x);			//x will be referenced by num after being passed as a function argument
	printf("x is %d", x);
	
	return 0;
}
