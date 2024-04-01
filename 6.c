/*6 – Escreva um programa que dados quatro números distintos determine e imprima a soma dos três 
menores.*/
#include <stdio.h>
#include <stdlib.h>

void soma(int vetor[]);

int main(){
    int vetor[4];
    printf("Digite o numero 1:\n");
    scanf("%d", &vetor[0]);

    printf("Digite o numero 2:\n");
    scanf("%d", &vetor[1]);
    
    printf("Digite o numero 3:\n");
    scanf("%d", &vetor[2]);
    
    printf("Digite o numero 4:\n");
    scanf("%d", &vetor[3]);
    soma(vetor);

    return 0;
};

void soma(int vetor[4]){
    int i, j, v;
    int t = 4;

    for (i = 0; i < t - 1; i ++){

        for (j = 0; j < t -i - 1; j ++){

            if(vetor[j] > vetor[j+1]){
                v = vetor[j];
                vetor[j] = vetor[j+1];  
                vetor[j+1] = v;
            };

        };
    };
    printf("A soma igual a %d\n", vetor[0]+ vetor[1]+ vetor[2]);
};
