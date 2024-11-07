#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b, resultado, opcao;
    printf("bem-vindo a calculadora de soma e subtracao\n");
	printf("entre com o primeiro valor: ");
	scanf("%d", &a);
    printf("entre com o segundo valor: ");
	scanf("%d", &b);

	printf("qual operacao matematica vc quer?\n 1 - adicao\n 2 - subtracao\n");
	scanf("%d", &opcao);

	switch (opcao) {
    case 1:
        printf("Adicao escolhida");
        resultado = a + b;
        printf("\nO resultado: %d", resultado);
        break;
    case 2:
        printf("Subtracao escolhida");
        resultado = a - b;
        printf("\nO resultado: %d", resultado);
        break;
    default:
        printf("opcao invalida");
        break;
	}


}
