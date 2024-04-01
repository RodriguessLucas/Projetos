/*3 - Faça um programa em C que receba um número inteiro n, passado pelo usuário, e imprima na tela o 
valor de n multiplicado por 5 se n for positivo e o valor de n subtraído de 3 se n for negativo.*/
#include <stdio.h>

int calculos(int entrada);

int main(){
    int entrada;
    printf("Digite um valor para iniciar os caulculos:\n");
    scanf("%d", &entrada);

    printf("%d", calculos(entrada));

    return 0;
};

int calculos(int entrada){
    if (entrada >=0){
        return (entrada * 5);
    }
    else{
        return (entrada - 3);
    };
};
