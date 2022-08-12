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
float saldo = 0.0;
printf("Digite o saldo: R$ ");
scanf("%f",&saldo);
printf("Saldo com reajuste de 2%%: R$ %2.2f\n", saldo*1.02);

//14. Faça um programa em C que leia a base e a altura de um retângulo e imprima o perímetro (base + altura) e a área (base * altura).
int base = 0, altura = 0;
printf("Digite a base do retângulo: ");
scanf("%d",&base);
printf("Digite a altura do retângulo: ");
scanf("%d",&altura);
printf("Perímetro: %d\n", base+altura);
printf("Área: %d\n", base*altura);

//15. Faça um programa em C que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o desconto.
float valor = 0.0, desconto = 0.0;
printf("Digite o valor do produto: R$ ");
scanf("%f",&valor);
printf("Digite o percentual do desconto: ");
scanf("%f",&desconto);
printf("Valor do desconto: R$ %2.2f\n",valor*desconto/100);
printf("Valor final do produto: R$ %2.2f\n",valor*(1-desconto/100));

//16. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário.
float salario = 0.0, reajuste = 0.0;
printf("Digite o valor do salário: R$ ");
scanf("%f",&salario);
printf("Digite o percentual do reajuste: ");
scanf("%f",&reajuste);
printf("Valor do salário reajustado: R$ %2.2f\n",salario*(1+reajuste/100));

//17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a seguir. Após calcular o programa deve imprimir o resultado da conversão.
//F = (9 x C +160) / 5
float celsius = 0.0;
printf("Digite a temperatura em celsius: ");
scanf("%f",&celsius);
printf("Farenheit: %2.1f\n", (9*celsius+160)/5);

//18. Faça umprograma em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. O programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:
//D = T x V       L = D / 12
//Em que:
//• D = Distância percorrida em horas
//• T = Tempo decorrido
//• V = Velocidade média
//• L = Litros de combustível consumidos
//Ao final, o programa deverá imprimir a distância percorrida e a quantidade de litros consumidos na viagem.
int tempo = 0, velocidade = 0;
printf("Digite o tempo gasto na viagem em minutos: ");
scanf("%d",&tempo);
printf("Digite a velocidade média (km/h): ");
scanf("%d",&velocidade);
float distancia = tempo/60.0*velocidade;
printf("Distância percorrida (km): %2.1f\n", distancia);
printf("Litros consumidos: %2.1f\n", distancia/12.0);

//19. Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. Ao final, o programa deve imprimir o valor da prestação atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere juros simples.
float prestacao = 0.0, juros = 0.0;
int dias_atraso = 0;
printf("Valor da prestação: R$ ");
scanf("%f",&prestacao);
printf("Taxa de juros por dia: ");
scanf("%f",&juros);
printf("Qtde de dias atrasado: ");
scanf("%d",&dias_atraso);
printf("Valor com multa: R$ %2.2f\n",prestacao*(1+juros*dias_atraso/100));

//20. Faça um programa em C que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o valor da cotação do dólar.
float dolares = 0.0, cotacao = 0.0;
printf("Qtde de dólares: US$ ");
scanf("%f",&dolares);
printf("Cotação do dólar: R$ ");
scanf("%f",&cotacao);
printf("US$ %2.2f = R$ %2.2f\n",dolares,dolares*cotacao);

    return EXIT_SUCCESS;
}