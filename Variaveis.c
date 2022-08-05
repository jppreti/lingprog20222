#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int a = 5;
    float b = 10.5;
    char c = 'c';
    bool d = true;
    char nome[50] = "";

    printf("Endereco de memoria de a: %p\n", &a);
    printf("Valor de a: %d\n",a);
    printf("Valor de b: %2.2f\n",b);
    printf("Valor de c: %c\n",c);
    printf("Valor de d: %d\n",d);
    printf("Valor de nome: %s\n",nome);

    printf("Nome completo: ");
    scanf("%50[^\n]", nome);
    printf("nome: %s\n",nome);

    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Novo valor de a: %d\n",a);   

    return EXIT_SUCCESS;
}