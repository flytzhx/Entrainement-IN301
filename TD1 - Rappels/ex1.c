#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	for(i = 0; i<10; i++){
		int j;
		for(j = 10; j>i; j--){
			printf(" ");
		}
		printf("*\n");
	}

	return 0;
}