#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x = 1.0;
	printf("Tamanho em memoria de um float: %ld\n", sizeof x);
	printf("Tamanho em memoria de um int %ld\n", sizeof(int));
	printf("Tamanho em memoria de um long %ld\n", sizeof(long));
	
	return 0;
}