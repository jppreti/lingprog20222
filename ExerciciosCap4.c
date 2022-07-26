/*
    EXERCÍCIOS DO CAPÍTULO 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void exemploMatriz() {
    //CARGA DA MATRIZ
    int matriz[3][2];
    for (int c = 0; c < 3; c++) {
        for (int l = 0; l < 2; l++) {
            matriz[c][l] = c+l;
        }
    }
    //IMPRESSAO DA MATRIZ
    for (int c = 0; c < 3; c++) {
        for (int l = 0; l < 2; l++) {
            printf("%d ", matriz[c][l]);
        }
        printf("\n");
    }    
    
    //EXEMPLO DE VETOR DE NOMES
    char nome[3][40];
    for (int i = 0; i < 3; i ++) {
        printf("Digite o %d nome: ", (i+1));
        scanf("%s", &nome[i]);
    }
    printf("\n\nNOMES CADASTRADOS\n");
    for (int i = 0; i < 3; i ++) {
        printf("Nome %d: %s\n", (i+1), nome[i]);
    }    
}

void solucao01() {
    printf("\n==========================================\n");
    printf("==============EXERCICIO 01================\n");
    printf("==========================================\n");

    int max = 0;
    printf("Digite a qtde de números: ");
    scanf("%d", &max);
    int numeros[max];
    for (int i = 0; i < max; i++) {
        scanf("%d",&numeros[i]);
    }
    int valor_busca = 0;
    printf("Digite o valor a ser pesquisado: ");
    scanf("%d", &valor_busca);
    int posicao_encontrada = -1;
    for (int i = 0; i < max; i++) {
        if (numeros[i] == valor_busca) {
            posicao_encontrada = i;
            break;
        }
    }
    if (posicao_encontrada == -1) {
        printf("Valor não existe no vetor");
    } else {
        printf("Valor encontrado na posição %d", posicao_encontrada+1);
    }

}

int soma(int a, int b) {
    return a+b;
}

int menu(char opcoes[5][30],int qtdeOpcoes) {
    printf("\n");
    for (int cont = 0; cont < qtdeOpcoes; cont++) {
        printf("[%d]: %s\n", cont, opcoes[cont]);
    }
    printf("Digite a opcao desejada: ");
    int opcao;
    scanf("%d",&opcao);
    return opcao;
}

void exemplosMenus() {
    char opcoes[5][30];
    strcpy(&opcoes[0], "Op1");
    strcpy(&opcoes[1], "Op2");
    strcpy(&opcoes[2], "Op3");
    strcpy(&opcoes[3], "Op4");
    strcpy(&opcoes[4], "Op5");
    int selecionado = menu(opcoes,5);
    printf("Foi selecionada a opcao: %d\n", selecionado);

    char opcoes2[3][30];
    strcpy(&opcoes2[0], "Operacao1");
    strcpy(&opcoes2[1], "Operacao2");
    strcpy(&opcoes2[2], "Operacao3");
    selecionado = menu(opcoes2,3);
    printf("Foi selecionada a opcao: %d\n", selecionado);
}

void popularVetor(int numeros[], int qtde, int valorMaximo) {
    srand((unsigned)time(NULL)); //muda a semente para que os números aleatórios variem de acordo com o horário
    for (int pos = 0; pos < qtde; pos++){
        numeros[pos] = rand() % (valorMaximo+1);
    }    
}

void solucao02() {
    printf("\n==========================================\n");
    printf("==============EXERCICIO 02================\n");
    printf("==========================================\n");

    char letras[10];
    for (int pos = 0; pos < 10; pos++){
        scanf("%c", &letras[pos]);
    }

    for (int pos = 0; pos < 10; pos++) {
        printf("%d: %c\n", pos+1, letras[pos]);
    }
}

void solucao03() {
    printf("\n==========================================\n");
    printf("==============EXERCICIO 03================\n");
    printf("==========================================\n");

    int numbers[15];
    popularVetor(numbers,15,100);

    for (int pos = 0; pos < 15; pos++) {
        printf("%d: %d\t", pos+1, numbers[pos]);
        if (numbers[pos] % 2 == 0) {
            printf("PAR\n");
        } else {
            printf("IMPAR\n");
        }
    }
}

int main() {
    exemploMatriz();

    printf("%d\n", soma(2,3));

    exemplosMenus();

    //1. Faça umprograma em C que armazene 15 números inteiros em umvetor e depois
    //permita que o usuário digite um número inteiro para ser buscado no vetor, se
    //for encontrado o programa deve imprimir a posição desse número no vetor, caso
    //contrário, deve imprimir a mensagem: "Nao encontrado!".
    solucao01();
    
    //2. Faça umprograma que armazene 10 letras em um vetor e imprima uma listagem
    //numerada.
    solucao02();

    //3. Construa uma programa em C que armazene 15 números em um vetor e imprima
    //uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.
    solucao03();

    //4. Faça um programa que armazene 8 números em um vetor e imprima todos os
    //números. Ao final, imprima o total de números múltiplos de seis.

    //5. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule
    //e armazene a média arredondada. Armazene também a situação do aluno: 1-
    //Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem
    //contendo as notas, a média e a situação de cada aluno em formato tabulado.
    //Utilize quantos vetores forem necessários para armazenar os dados.

    //6. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular
    //e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma
    //li]stagemnumerada com o salário e o novo salário. Declare quantos vetores forem
    //necessários.

    //7. Crie umprograma que leia o preço de compra e o preço de venda de 100mercadorias
    //(utilize vetores). Ao final, o programa deverá imprimir quantas mercadorias
    //proporcionam:
    //• lucro < 10%
    //• 10% <= lucro <= 20%
    //• lucro > 20%

    //8. Construa umprograma que armazene o código, a quantidade, o valor de compra
    //e o valor de venda de 30 produtos. A listagempode ser de todos os produtos ou
    //somente de umao se digitar o código.

    //9. Faça um programa em C que leia dois conjuntos de números inteiros, tendo
    //cada um 10 elementos. Ao final o programa deve listar os elementos comuns aos
    //conjuntos.

    //10. Faça umprograma que leia um vetor vet de 10 elementos e obtenha um vetor w
    //cujos componentes são os fatoriais dos respectivos componentes de vet.

    //11. Construa um programa que leia dados para umvetor de 100 elementos inteiros.
    //Imprimir o maior e o menor, sem ordenar, o percentual de números pares e a
    //média dos elementos do vetor.

    //12. Crie umprograma para gerenciar umsistema de reservas de mesas em uma casa
    //de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá
    //permitir que o usuário escolha o código de uma mesa (100 a 129) e forneça a
    //quantidade de lugares desejados. O programa deverá informar se foi possível
    //realizar a reserva e atualizar a reserva. Se não for possível, o programa deverá
    //emitir uma mensagem. O programa deve terminar quando o usuário digitar
    //o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
    //ocupados.

    //13. Construa um programa que realize as reservas de passagens áreas de uma companhia.
    //O programa deve permitir cadastrar o número de 10 voos e definir a
    //quantidade de lugares disponíveis para cada um. Após o cadastro, leia vários
    //pedidos de reserva, constituídos do número da carteira de identidade do cliente e
    //do número do voo desejado. Para cada cliente, verificar se há possibilidade no
    //voo desejado. Emcaso afirmativo, imprimir o número da identidade do cliente e
    //o número do voo, atualizando o número de lugares disponíveis. Caso contrário,
    //avisar ao cliente a inexistência de lugares. A leitura do número 0 (zero) para o voo
    //desejado indica o término da leitura de reservas.

    //14. Faça um programa que armazene 50 números inteiros em umvetor. O programa
    //deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do
    //elemento do primeiro vetor.

    //15. Faça um programa que leia e armazene vários números, até digitar o número
    //0. Imprimir quantos números iguais ao último número foram lidos. O limite de
    //números é 100.

    //16. Crie um programa em C para ler um conjunto de 100 números reais e informe:
    //• quantos números lidos são iguais a 30
    //• quantos são maior que a média
    //• quantos são iguais amédia

    //17. Faça umprograma que leia umconjunto de 30 valores inteiros, armazene-os em
    //um vetor e os imprima ao contrário da ordem de leitura.

    //18. Faça umprograma em C que permita entrar com dados para um vetor VET do tipo
    //inteiro com 20 posições, em que podem existir vários elementos repetidos. Gere
    //um vetor VET2 ordenado a partir do vetor VET e que terá apenas os elementos
    //não repetidos.

    //19. Suponha dois vetores de 30 elementos cada, contendo: código e telefone. Faça
    //um programa que permita buscar pelo código e imprimir o telefone.

    //20. Faça umprograma que leia a matrícula e a média de 100 alunos. Ordene da maior
    //para a menor nota e imprima uma relação contendo todas as matrículas e médias.

    return EXIT_SUCCESS;
}
