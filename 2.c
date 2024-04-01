/*2 - Faça um programa em C que receba dois números inteiros n1 e n2, passados pelo usuário, e imprima 
na tela uma mensagem se ocorrer a seguinte situação: se n1 estiver entre 50 e 200 e n2 estiver entre -1 
e 9.*/
#include <stdio.h>

typedef struct numeros{
    int numero_A, numero_B;
}num;

int main(){
    num entrada;

    printf("Digite o numero 1:\n");
    scanf("%i",&entrada.numero_A);
    printf("Digite o numero 2:\n");
    scanf("%i", &entrada.numero_B);
    
    if (entrada.numero_A >= 50 && entrada.numero_A <= 200 && entrada.numero_B >= -1 && entrada.numero_B <=9){
        printf("Sucesso!");
    };
    return 0;
};