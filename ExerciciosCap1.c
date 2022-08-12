/*
    EXERCÍCIOS DO CAPÍTULO 1
    http://www.github.com/jppreti/lingprog20222
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

//1. Faça um programa em C que imprima o seu nome.
printf("João Paulo\n");

//2. Faça um programa em C que imprima o produto dos valores 30 e 27.
printf("%d\n",30*27);

//3. Faça um programa em C que imprima a média aritmética entre os números 5, 8, 12.
printf("%2.2f\n",(5+8+12)/3.0);

//4. Faça um programa em C que leia e imprima um número inteiro.
int num = 0;
printf("Digite um número inteiro: ");
scanf("%d",&num);
printf("O número digitado foi: %d\n", num);

//5. Faça um programa em C que leia dois números reais e os imprima.
float num1 = 0, num2 = 0;
printf("Digite o primeiro número real: ");
scanf("%f",&num1);
printf("Digite o segundo número real: ");
scanf("%f",&num2);
printf("Os números digitados foram: %f e %f\n", num1, num2);

//6. Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.
int numi = 0;
printf("Digite um número inteiro: ");
scanf("%d",&numi);
printf("Sucessor de %d é %d\n", numi, numi+1);
printf("Antecessor de %d é %d\n", numi, numi-1);

//7. Faça um programa em C que leia o nome o endereço e o telefone de um cliente e ao final, imprima esses dados.
__fpurge(stdin);
char nome[50], endereco[50], telefone[14];
printf("Nome: ");
scanf("%50[^\n]",nome);
__fpurge(stdin);
printf("Endereço: ");
scanf("%50[^\n]",endereco);
__fpurge(stdin);
printf("Telefone: ");
scanf("%14[^\n]",telefone);
__fpurge(stdin);
printf("Nome: %s\nEndereço: %s\nTelefone: %s\n",nome,endereco,telefone);

//8. Faça um programa em C que leia dois números inteiros e imprima a subtração deles.
int numi1 = 0, numi2 = 0;
printf("Digite o primeiro número inteiro: ");
scanf("%d",&numi1);
printf("Digite o segundo número inteiro: ");
scanf("%d",&numi2);
printf("%d - %d = %d:\n", numi1, numi2, numi1-numi2);

//9. Faça um programa em C que leia um número real e imprima ¼ deste número.
float numr = 0.0;
printf("Digite um número real: ");
scanf("%f",&numr);
printf("¼ de %2.2f = %2.2f\n",numr,numr/4.0);

//10. Faça um programa em C que leia três números reais e calcule a média aritmética destes números. Ao final, o programa deve imprimir o resultado do cálculo.
float numr1 = 0.0, numr2 = 0.0, numr3 = 0.0;
printf("Digite o primeiro número real: ");
scanf("%f",&numr1);
printf("Digite o segundo número real: ");
scanf("%f",&numr2);
printf("Digite o terceiro número real: ");
scanf("%f",&numr3);
printf("Média = %2.2f\n",(numr1+numr2+numr3)/3.0);

//11. Faça um programa em C que leia dois números reais e calcule as quatro operações básicas entre estes dois números, adição, subtração,multiplicação e divisão. Ao final, o programa deve imprimir os resultados dos cálculos.
float nr1 = 0.0, nr2 = 0.0;
printf("Digite o primeiro número real: ");
scanf("%f",&nr1);
printf("Digite o segundo número real: ");
scanf("%f",&nr2);
printf("%2.2f + %2.2f = %2.2f\n",nr1,nr2,nr1+nr2);
printf("%2.2f - %2.2f = %2.2f\n",nr1,nr2,nr1-nr2);
printf("%2.2f * %2.2f = %2.2f\n",nr1,nr2,nr1*nr2);
printf("%2.2f / %2.2f = %2.2f\n",nr1,nr2,nr1/nr2);

//12. Faça um programa em C que leia um número real e calcule o quadrado deste número. Ao final, o programa deve imprimir o resultado do cálculo.
float quadrado = 0.0;
printf("Digite um número real: ");
scanf("%f",&quadrado);
printf("Seu quadrado é %2.2f\n", pow(quadrado,2.0));

//13. Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa em C que leia a base e a altura de um retângulo e imprima o perímetro (base + altura) e a área (base * altura).
//15. Faça um programa em C que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o desconto.
//16. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário.
//17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a seguir. Após calcular o programa deve imprimir o resultado da conversão.
//F = (9 x C +160) / 5
//18. Faça umprograma em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. O programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:
//D = T x V       L = D / 12
//Em que:
//• D = Distância percorrida em horas
//• T = Tempo decorrido
//• V = Velocidade média
//• L = Litros de combustível consumidos
//Ao final, o programa deverá imprimir a distância percorrida e a quantidade de litros consumidos na viagem.
//19. Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. Ao final, o programa deve imprimir o valor da prestação atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere juros simples.
//20. Faça um programa em C que efetue a apresentação do valor da conversão em real (R$) de umvalor lido em dólar (US$). Para isso, será necessário também ler o valor da cotação do dólar.

    return EXIT_SUCCESS;
}