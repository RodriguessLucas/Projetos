/*7 - Escreva um programa que tenha como entrada o peso, em kg, e a altura, em m, de uma pessoa e que 
calcule o seu IMC a partir da fórmula:
Por fim, determinar em que faixa essa pessoa se encaixa:
• menor que 18.5: abaixo do peso
• entre 18.5 e 24.9: peso normal
• entre 25.0 e 29.9: sobrepeso
• entre 30.0 e 34.9: obesidade grau I
• entre 35.0 e 39.9: obesidade grau II
• maior que 40.0: obesidade grau III*/
#include <stdio.h>

typedef struct pessoa{
    float altura,peso;
}imc;

float calcular_imc(float altura, float peso);
float tipo_imc(float altura, float peso);

int main(){
    imc pessoa;
    printf("Digite seu peso em KG:\n");
    scanf("%f", &pessoa.peso);
    printf("Digite seu peso em altura:\n");
    scanf("%f", &pessoa.altura);

    tipo_imc(pessoa.altura, pessoa.peso);
};

float calcular_imc(float altura, float peso){
    return (peso/(altura*altura));
};  

float tipo_imc(float altura, float peso){
    float imc = calcular_imc(altura, peso);

    if (imc < 18.5){
        printf("Abaixo do peso\n");
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf("Peso normal\n");
    }
    else if (imc >= 25 && imc <= 29.9){
        printf("Sobrepeso");
    }
    else if (imc >= 30 && imc <= 34.9){
        printf("Obesidade grau I\n");
    }
    else if (imc >= 35 && imc <= 39.9){
        printf("Obesidade grau II\n");
    }
    else{
        printf("Obesidade grau III\n");
    };
    return 0;
};