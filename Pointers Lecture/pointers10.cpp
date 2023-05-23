#include <stdio.h>

char* getLastAddress(char x[], int size){
	char *ptr;
	
	ptr = x + size - 1;
	
	return ptr;								//returns a pointer
}

int main(){
	int size;
	char *ptr, arr[] = "DLSU-MANILA", *last;
		
	size = sizeof(arr)/sizeof(arr[0]);		//this calculates the size of the array
	ptr = arr;								//referencing ptr to address of arr[]
	last = getLastAddress(arr, size);
	printf("The first element is %c stored at %x\n", arr[0], arr);
	printf("The last element is %c stored at %x\n", arr[size-1], last);
	last = ptr + size - 1;					//calculate the address of the last element
	printf("These two values are %d elements apart from one another", last - ptr);

	return 0;
}
