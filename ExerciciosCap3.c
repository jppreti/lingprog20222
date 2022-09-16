/*
    EXERCÍCIOS DO CAPÍTULO 3
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*
//1. Faça um programa em C que imprima todos os números de 1 até 100.
//valor inicial, condição de execução, incremento
for (int i = 1; i <= 100; i++) {
    printf("%d ", i);
} 
printf("\n\n");
int i = 1;
while (i <= 100) {
    printf("%d ", i);
    i++;
}
printf("\n\n");
i = 1;
do {
    printf("%d ", i);
    i++;
} while(i <= 100);

//2. Faça um programa que imprima todos os números pares de 100 até 1.

//3. Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

//4. Faça umprograma em C que permita entrar com o nome, a idade e o sexo de 20
//pessoas.Oprograma deve imprimir o nome da pessoa se ela for do sexomasculino
//e tiver mais de 21 anos.

char nome[30], genero;
int idade;

for (int i=0; i<20; i++) {
    printf("Nome: ");
    scanf(" %50[^\n]", nome);
    printf("Gênero: ");
    scanf(" %c", &genero); //ou genero = getchar();
    printf("Idade: ");
    scanf(" %d", &idade);
    if (idade == 0) break;
    if ((genero == 'M' || genero == 'm') && idade > 21)
        printf("%s\n", nome);
}

//5. Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas
//sucessivas, crie um programa que calcule o produto de dois números inteiros
//lidos. Suponha que os números lidos sejam positivos e que o multiplicando seja
//menor do que o multiplicador.
int multiplicando, multiplicador;
int resultado = 0;
printf("Multiplicando: ");
scanf(" %d", &multiplicando);
printf("Multiplicador: ");
scanf(" %d", &multiplicador);
for (int i = 1; i <= multiplicador; i++)
    resultado += multiplicando;
printf("%d * %d = %d\n", multiplicando, multiplicador, resultado);

//6. Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
//Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
//a partir da soma dos anteriores. Exemplo:
//• 1 + 1 = 2, terceiro termo;
//• 1 + 2 = 3, quarto termo, etc.
int anterior=1, proximo=1;
printf("%d ", anterior);
for (int i = 0; i < 19; i++) {
    printf("%d ", proximo);
    int novo_anterior = proximo;
    proximo = anterior + proximo;
    anterior = novo_anterior;
}
*/
//7. Crie um programa emlinguagem C que permita entrar com o nome, a nota da
//prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
//nome, nota da prova 1, nota da prova 2, emédia das notas de cada aluno. Ao final,
//imprimir a média geral da turma.
char nome[30];
char lista[4000];
float nota1, nota2, media, media_geral=0;
sprintf(lista, "NOME\tN1\tN2\tMEDIA");
for (int i = 0; i < 3; i++) {
    printf("Nome: ");
    scanf(" %50[^\n]", nome);
    printf("Nota 1: ");
    scanf(" %f", &nota1);
    printf("Nota 2: ");
    scanf(" %f", &nota2);
    media = (nota1 + nota2) / 2;
    sprintf(lista, "%s\n%s\t%.1f\t%.1f\t%.1f", lista,nome,nota1,nota2,media);
    media_geral += media;
}
printf("%s\n\n", lista);
printf("Média da Turma: %.1f\n", media_geral/3);


//8. Faça umprograma que permita entrar com o nome e o salário bruto de 10 pessoas.
//Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
//calculado conforme a tabela a seguir:
//Salário IRRF
//Salário menor que R$1300,00 Isento
//Salário maior ou igual a R$1300,00 e menor que R$2300,00 10% do salário bruto
//Salário maior ou igual a R$2300,00 15% do salário bruto

//9. No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou
//uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
//a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
//excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a
//opinião de 20 espectadores, calcule e imprima:
//• Amédia das idades das pessoas que responderam excelente;
//• A quantidade de pessoas que responderamregular;
//• A percentagem de pessoas que responderam bom entre todos os expectadores
//analisados.

//10. Em um campeonato Europeu de Volleyball, se inscreveram 30 países. Sabendo-se
//que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
//jogadores, crie um programa que apresente as seguintes informações:
//• O pesomédio e a idade média de cada um dos times;
//• O atleta mais pesado de cada time;
//• O atleta mais jovem de cada time;
//• O pesomédio e a idade média de todos os participantes.

//11. Construa um programa em C que leia vários números e informe quantos números
//entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
//deverá cessar sua execução.

//12. Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
//ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
//ano, fazer um programa que calcule e imprima o tempo necessário para que a
//população do país A ultrapasse a população do país B.

//13. Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores
//de consumo. Para cada consumidor, são digitados os seguintes dados:
//• número do consumidor
//• quantidade de kWh consumidos durante o mês
//• tipo (código) do consumidor
//1-residencial, preço em reais por kWh = 0,3
//2-comercial, preço em reais por kWh = 0,5
//3-industrial, preço em reais por kWh = 0,7
//Os dados devem ser lidos até que seja encontrado o consumidor com número 0
//(zero). O programa deve calcular e imprimir:
//• O custo total para cada consumidor
//• O total de consumo para os três tipos de consumidor
//• Amédia de consumo dos tipos 1 e 2

//14. Faça umprograma que leia vários números inteiros e apresente o fatorial de cada
//número. O algoritmo encerra quando se digita umnúmero menor do que 1.
//15. Faça um programa em C que permita entrar com a idade de várias pessoas e
//imprima:
//• total de pessoas com menos de 21 anos
//• total de pessoas com mais de 50 anos

//16. Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações
//sucessivas, criar um algoritmo que calcule e imprima o resto da divisão de
//números inteiros lidos. Para isso, basta subtrair o divisor ao dividendo, sucessivamente,
//até que o resultado seja menor do que o divisor. O número de subtrações
//realizadas corresponde ao quociente inteiro e o valor restante da subtração corresponde
//ao resto. Suponha que os números lidos sejam positivos e que o dividendo
//seja maior do que o divisor.

//17. Crie um programa em C que possa ler um conjunto de pedidos de compra e
//calcule o valor total da compra. Cada pedido é composto pelos seguintes campos:
//• número de pedido
//• data do pedido (dia, mês, ano)
//• preço unitário
//• quantidade
//O programa deverá processar novos pedidos até que o usuário digite 0 (zero)
//como número do pedido.

//18. Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de
//serviços diários de:
//• R$15,00, se o número de dias for menor que 10;
//• R$8,00, se o número de dias for maior ou igual a 10;
//Faça umprograma que imprima o nome, a conta e o número da conta de cada
//cliente e ao final o total faturado pela pousada.
//O programa deverá ler novos clientes até que o usuário digite 0 (zero) como
//número da conta.

//19. Emuma Universidade, os alunos das turmas de informática fizeram uma prova
//de algoritmos. Cada turma possui um número de alunos. Criar um programa que
//imprima:
//• quantidade de alunos aprovados;
//• média de cada turma;
//• percentual de reprovados.
//Obs.: Considere aprovado comnota >= 7.0

//20. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
//• Qual o seu time de coração?
//1-Fluminense;
//2-Botafogo;
//3-Vasco;
//4-Flamengo;
//5-Outros
//• Onde você mora?
//1-RJ;
//2-Niterói;
//3-Outros
//• Qual o seu salário?
//Faça um programa que imprima:
//• o número de torcedores por clube;
//• a média salarial dos torcedores do Botafogo;
//• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros
//clubes;
//• o número de pessoas de Niterói torcedoras do Fluminense
//Obs.: O programa encerra quando se digita 0 para o time.

//21. Emuma universidade cada aluno possui os seguintes dados:
//• Renda pessoal;
//• Renda familiar;
//• Total gasto com alimentação;
//• Total gasto com outras despesas;
//Faça um programa que imprima a porcentagem dos alunos que gasta acima de
//R$200,00 com outras despesas. O número de alunos com renda pessoal maior
//que a renda familiar e a porcentagem gasta com alimentação e outras despesas
//em relação às rendas pessoal e familiar.
//Obs.: O programa encerra quando se digita 0 para a renda pessoal.

//22. Crie um programa que ajude o DETRAN a saber o total de recursos que foram
//arrecadados com a aplicação de multas de trânsito.
//O algoritmo deve ler as seguintes informações para cada motorista:
//• número da carteira de motorista (de 1 a 4327);
//• número demultas;
//• valor de cada uma das multas.
//Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o
//total de recursos arrecadados (somatório de todas as multas). O programa deverá
//imprimir tambémo número da carteira domotorista que obteve o maior número
//de multas.
//Obs.: O programa encerra ao ler a carteira de motorista de valor 0.

//23. Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso
//e altura) dos atletas que participaram de uma olimpíada, e informar:
//• a atleta do sexo feminino mais alta;
//• o atleta do sexomasculinomais pesado;
//• amédia de idade dos atletas.
//Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um
//atleta.
//Para resolver este exercício, consulte a aula 7 que aborda o tratamento de strings,
//como comparação e atribuição de textos.

//24. Faça um programa que calcule quantos litros de gasolina são usados em uma
//viagem, sabendo que um carro faz 10 km/litro. O usuário fornecerá a velocidade
//do carro e o período de tempo que viaja nesta velocidade para cada trecho do
//percurso. Então, usando as fórmulas distância = tempo x velocidade e litros
//consumidos = distância / 10, o programa computará, para todos os valores nãonegativos
//de velocidade, os litros de combustível consumidos. O programa deverá
//imprimir a distância e o número de litros de combustível gastos naquele trecho.
//Deverá imprimir também o total de litros gastos na viagem. O programa encerra
//quando o usuário informar umvalor negativo de velocidade.

//25. Faça umprograma que calcule o imposto de renda de umgrupo de contribuintes,
//considerando que:
//a) os dados de cada contribuinte (CIC, número de dependentes e renda bruta
//anual) serão fornecidos pelo usuário via teclado;
//b) para cada contribuinte será feito umabatimento de R$600 por dependente;
//c) a renda líquida é obtida diminuindo-se o abatimento com os dependentes
//da renda bruta anual;
//d) para saber quanto o contribuinte deve pagar de imposto, utiliza-se a tabela
//a seguir:
//Renda Líquida Imposto
//até R$1000 Isento
//de R$1001 a R$5000 15%
//acima de R$5000 25%
//e) o valor de CIC igual a zero indica final de dados;
//f ) o programa deverá imprimir, para cada contribuinte, o número do CIC e o
//imposto a ser pago;
//g) ao final o programa deverá imprimir o total do imposto arrecadado pela
//Receita Federal e o número de contribuintes isentos;
//h) leve em consideração o fato de o primeiro CIC informado poder ser zero.

//26. Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma
//certa cidade, em umdeterminado dia. Para cada casa visitada foram fornecidos o
//número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo a ele
//naquela casa. Se a televisão estivesse desligada, nada seria anotado, ou seja, esta
//casa não entraria na pesquisa. Criar um programa que:
//• Leia um número indeterminado de dados, isto é, o número do canal e o
//número de pessoas que estavam assistindo;
//• Calcule e imprima a porcentagem de audiência em cada canal.
//Obs.: Para encerrar a entrada de dados, digite o número do canal zero.

//27. Crie um programa que calcule e imprima o CR do período para os alunos de
//computação. Para cada aluno, o algoritmo deverá ler:
//• número da matrícula;
//• quantidade de disciplinas cursadas;
//• notas em cada disciplina;
//Além do CR de cada aluno, o programa deve imprimir o melhor CR dos
//alunos que cursaram5 ou mais disciplinas.
//• fim da entrada de dados é marcada por uma matrícula inválida (matrículas
//válidas de 1 a 5000);
//• CR do aluno é igual à média aritmética de suas notas.

//28. Construa umprograma que receba a idade, a altura e o peso de várias pessoas,
//Calcule e imprima:
//• a quantidade de pessoas com idade superior a 50 anos;
//• amédia das alturas das pessoas com idade entre 10 e 20 anos;
//• a porcentagem de pessoas com peso inferior a 40 quilos entre todas as
//pessoas analisadas.

//29. Construa um programa que receba o valor e o código de várias mercadorias
//vendidas em umdeterminado dia. Os códigos obedecem a lista a seguir:
//L-limpeza
//A-Alimentação
//H-Higiene
//Calcule e imprima:
//• o total vendido naquele dia, com todos os códigos juntos;
//• o total vendido naquele dia em cada um dos códigos.
//Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.

//30. Faça um programa que receba a idade e o estado civil (C-casado, S-solteiro, Vviúvo
//e D-desquitado ou separado) de várias pessoas. Calcule e imprima:
//• a quantidade de pessoas casadas;
//• a quantidade de pessoas solteiras;
//• amédia das idades das pessoas viúvas;
//• a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas
//analisadas.
//Obs.: Para encerrar a entrada de dados, digite um número menor que zero para a
//idade.

    return EXIT_SUCCESS;
}