#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a -b;
    int produto = a * b;
    int quociente = a / b; // note que a divisão de inteiros resulta em um número inteiro, ele abreviou o resultado pois 10/3 = 3.3333... e ele arredondou para 3

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);


}