#include <stdlib.h>
#include <stdio.h>

int main(){

	int temps = 0;
	printf("Entrez un temps en seconde : ");
	scanf("%d", &temps);

	int heure = temps/3600;
	int min = (temps%3600) / 60;
	int sec = (temps%3600) % 60;

	printf("\n %d secondes correspond à : %d heure(s) %d minute(s) %d secondes(s). \n ", temps, heure, min, sec);


	return 0;
}