#include <stdio.h>
#include <stdlib.h>

int calculo(int x, int n) {
	
	if (n == 0){
		
		return 1;
		
	} else if (n == 1) {
		
		return x;
		
	} else {
		
		n = n - 1;
		return x * calculo(x, n);
	}
		
}

int main(){
	
	int ex1 = calculo(2, 3);
	int ex2 = calculo(3, 3);
	int ex3 = calculo(2, 2);
	int ex4 = calculo(5, 3);
	printf("%d\n", ex1);
	printf("%d\n", ex2);
	printf("%d\n", ex3);
	printf("%d\n", ex4);
	
	return 0;
}