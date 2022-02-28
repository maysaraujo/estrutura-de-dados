#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void sair();
void entrar();
void imprimir();
int menu();
void imprimir();

int fila[TAM];
int fim = 0;
int inicio = 0;

int main()
{
    int op = 1;

    while (op != 0)
    {
        imprimir();
        menu();

        scanf("%d", &op);
        switch (op)
        {
        case 1:
            entrar();
            break;

        case 2:
            sair();
            break;
        }
    }
}

int menu()
{
    printf("\n\n");
    printf(" 1. Adicionar elemento na fila\n");
    printf(" 2. Retirar elemento da fila\n");
    printf(" 0. Sair\n");
    printf(" Insira a sua opcao: ");
}

void entrar()
{
    if (fim == TAM)
    {
        printf(" FILA CHEIA\n");
        return;
    }
    else
    {
        printf(" Insira o valor a ser inserido: ");
        scanf("%d", &fila[fim]);
        fim++;
    }
}

void sair()
{
    if (inicio == fim)
    {
        printf(" FILA VAZIA\n");
    }
    else
    {
        int i;
        for (i = 0; i < TAM; i++)
        {
            fila[i] = fila[i + 1];
        }

        fila[fim] = 0;
        fim--;
    }
}

void imprimir()
{
    int i;
    printf(" [ ");
    for (i = 0; i < TAM; i++)
    {
        printf(" %d  ", fila[i]);
    }

    printf(" ]\n\n");
}