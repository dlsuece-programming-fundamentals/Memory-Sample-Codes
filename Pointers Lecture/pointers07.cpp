#include <stdio.h>

int* getLastAddress(int *x, int size){
	int *ptr;
	
	ptr = x + size - 1;
	
	return ptr;							//returns a pointer
}

int main(){
	int size;
	int *ptr, arr[] = {1, 2, 4, 8, 16}, *first, *last;
	
	size = sizeof(arr)/sizeof(arr[0]);	//this calculates the number of elements in the array
	first = &arr[0];
	last = getLastAddress(arr, size);

	printf("The first element is %d and is stored at %x\n", arr[0], first);
	printf("The last element is %d and is stored at %x", arr[size - 1], last);

	return 0;
}
