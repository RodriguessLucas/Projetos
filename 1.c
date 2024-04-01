/*1 - Faça um programa em C que receba um número n, passado pelo usuário, e imprima na tela uma 
mensagem informando se o resto da divisão de n por 3 é igual a 1 e também se n é divisível por 5
*/
#include <stdio.h>

void verificar(int n);

int main(){
    int entrada;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &entrada);
    verificar(entrada);
    return 0;
};

void verificar(int n){
    if (n %3 == 1){
        printf("Deixa resto igual a 1\n");
    }
    else{
        printf("Nao deixa resto igual a 1\n");
    }; 
    if (n % 5  ==0){
        printf("E divisivel por 5\n");
    }
    else{
        printf("Nao e divisivel por 5\n");
    };
    return ;
};
