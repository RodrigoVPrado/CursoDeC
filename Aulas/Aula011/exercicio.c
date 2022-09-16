#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char sexo;
	int idade;
	float peso, altura;
	
	printf("Digite sexo, idade, peso, altura");
		scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
	
	printf("Sexo: %c\nIdade: %d\nPeso: %2.f\nAltura: %1.f\n", sexo, idade, peso, altura);
	
	return 0;
}