#include <stdio.h>
#define TAM 5

/* variáveis */
int pilha[TAM];
int posicao = 0;
int opcao = 0;
int numero;

/* prototipação */
int menu();
void push(int);
int pop();
void imprimir();

int main()
{
    while (opcao != 4)
    {
        opcao = menu();
        switch (opcao)
        {
        case 1:
            printf(" Insira o valor a ser inserido: ");
            scanf("%d", &numero);
            push(numero);
            break;

        case 2:
            numero = pop();
            if (numero != -1)
            {
                printf(" O numero %d foi retirado da pilha\n", numero);
            }

            break;

        case 3:
            imprimir();
            break;

        case 4:
            break;
        default:
            printf(" Opcao invalida\n");
        }
    }

    return 0;
}

int menu()
{
    int op;
    printf("\n\n");
    printf(" 1. push\n");
    printf(" 2. pop\n");
    printf(" 3. imprimir\n");
    printf(" 4. sair\n");
    printf(" Insira a sua opcao: ");
    scanf("%d", &op);

    return op;
}

void push(int valor)
{
    if (posicao == TAM)
    {
        printf(" ESTOURO DE PILHA\n");
    }
    else
    {
        pilha[posicao] = valor;
        posicao++;
    }
}
int pop()
{
    if (posicao == 0)
    {
        printf(" PILHA VAZIA\n");
        return -1;
    }

    posicao--;
    return pilha[posicao];
}
void imprimir()
{
    int i;
    if (posicao != 0)
    {
    }
    for (i = posicao - 1; i >= 0; i--)
    {
        printf(" +---+----+\n");
        printf(" | %d | %2d |\n", i, pilha[i]);
    }
    printf(" +---+----+\n");
}