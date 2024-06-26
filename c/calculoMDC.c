// Nome: Erick Martins Silva
// Instituição: Cefet/RJ
// Período: 1
// Descrição: O programa obtém dois números inseridos pelo usuário final e calcula o MDC entre eles enquanto explica passo a passo o Algoritmo de Euclides

#include <stdio.h>

int calculoMDC (int a, int b)
{
    printf("Adotaremos %d como A e %d como B.\n", a, b);
    if (a < b)
    {
        printf("Como B e maior que A, trocaremos os valores entre eles. ");
        int aux = a;
        a = b;
        b = aux;
        printf("A passa ser %d e B passa a ser %d.\n", a, b);
    }
    int resto = a % b;
    printf("O resto da divisao entre A e B equivale a %d.\n", resto);
    while (resto != 0)
    {
        printf("Como o resto nao equivale a zero, trocaremos A por B e B pelo resto da divisao entre A e B.\n");
        int aux = a;
        a = b;
        b = aux % b;
        resto = a % b;
        printf("Assim, A passa a ser %d e B passa a ser %d e ", a, b);
        printf("o resto da divisao entre A e B equivale a %d.\n", resto);
    }
    return b;
}
int main()
{
    int a, b, resto;
    printf("Insira dois numeros: ");
    scanf("%d %d", &a, &b);
    int m = calculoMDC(a,b);
    printf("Logo, o MDC entre %d e %d = %d.", a, b, m);
}
