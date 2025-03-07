#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    double opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);


    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);    

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("A nome é: %s\n", nome);
    
}