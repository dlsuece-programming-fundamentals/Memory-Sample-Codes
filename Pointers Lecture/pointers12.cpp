#include <stdio.h>
 
int main(){
	int i, j, num[2][3] = { 
						{16, 18, 20}, 
						{25, 26, 27}
					};
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++)
			printf("*(*(num+%d)+%d) = %d\n", i, j, *(*(num+i)+j));
	}
	
	return 0;
}
