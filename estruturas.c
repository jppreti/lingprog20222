#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int ddd;
    long numero;
} Telefone;

typedef struct {
    Telefone telefone_com;
    Telefone telefone_res;
    char email[30];
} Contato;

typedef struct {
    char rua[40];
    char bairro[40];
    char cidade[40];
    char uf[2];
} Endereco;

typedef struct {
    char nome[40];
    Contato contato;
    Endereco endereco;
} Aluno;

int main() {
    Aluno a;
    return 0;
}
