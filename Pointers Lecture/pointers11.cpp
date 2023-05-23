#include <stdio.h>
 
int main(){
	int i;
	char *names[] = {
						"Matthew",
						"Mark",
						"Luke",
						"John"
					};	

	for(i = 0; i < 4; i++)
		printf("Value of names[%d] = %s\n", i, names[i] );
	
	return 0;
}
