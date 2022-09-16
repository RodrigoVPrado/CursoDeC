#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char sexo;
	int idade;
	float peso, altura;
	
	printf("Digite idade, peso, altura, sexo");
		scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);
	
	printf("Sexo: %c\nIdade: %d\nPeso: %2.f\nAltura: %1.f\n", sexo, idade, peso, altura);
	return 0;
}