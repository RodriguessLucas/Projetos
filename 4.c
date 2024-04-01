/*4 - Faça um programa em C que receba dois números inteiros n1 e n2, passados pelo usuário, obtenha 
o resto da divisão entre n1 e n2 e multiplique este valor por n1. Se o resultado for par, seu programa 
deve imprimir na tela este valor divido por 2.*/
#include <stdio.h>

int resto_multi(int num1, int num2);
int analise(int num1, int num2);
int dividir(int num);

int main(){
    int num1 , num2;
    printf("Digite o numero 1:\n");
    scanf("%d", &num1);
    printf("Digite o numero 2:\n");
    scanf("%d", &num2);
    printf("Resultado: %d\n", analise(num1,num2));
};

int resto_multi(int num1, int num2){
    return ((num1 % num2) * num1);
};

int dividir(int num){
    return (num/2);
};

int analise(int num1, int num2){
    int num = resto_multi(num1,num2);
    if (num % 2 == 0){
        return (dividir(num));
    }
    else{
        return(num);
    };
};

