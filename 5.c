/*5 - Faça um programa em C que receba dois números inteiros n1 e n2 passados pelo usuário. O seu 
programa deve informar se n1 e n2 forem ambos divisíveis por 3 ou forem ambos divisíveis por 5.*/
#include <stdio.h>

typedef struct numeros{
    int num1, num2;
}nums;

int analise(int num1, int num2);

int main(){
    nums entrada;
    printf("Digite o numero 1:\n");
    scanf("%d", &entrada.num1);
    printf("Digite o numero 1:\n");
    scanf("%d",&entrada.num2);
    analise(entrada.num1, entrada.num2);
};

int analise(int num1, int num2){
    if ((num1 % 3 ==0 && num2 %3 == 0) || (num1 % 5 == 0 && num2 % 5 == 0)){
        printf("Sucesso!\n");
        return 1;
    }
    else{
        printf("Geral achou paia.\n");
        return 0;
    };
};


