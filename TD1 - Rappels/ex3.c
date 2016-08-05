#include <stdlib.h>
#include <stdio.h>

int main(){

	int a, b = 0;
	int res = 0;
	printf("Entrer deux nombres à multiplier : " );
	scanf("%d %d", &a, &b);
	printf("\n %d x %d", a, b);
	while(a > 0){
		if(a%2 == 0){
			a /= 2;
			b *= 2;
			printf("\n = %d x %d + %d", a, b, res);
		}
		else {
			a -= 1;
			res += b;
			printf("\n = %d x %d + %d", a, b, res);
		} 
	}
	printf("\n = %d \n", res);

	return 0;
}