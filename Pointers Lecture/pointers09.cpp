#include <stdio.h>

int main(){
	int *ptr, arr[] = {1, 2, 4, 8, 16};
	int i;
	
	ptr = arr;				//referencing ptr to address of arr[]
	for(i = 0; i < 5; i++)
		printf("The value of arr[%d] is %d and is stored at %x\n", i, *(ptr + i), (ptr + i));
	
	return 0;
}
