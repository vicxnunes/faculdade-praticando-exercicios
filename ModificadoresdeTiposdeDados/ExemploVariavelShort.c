#include <stdio.h>
int main(){
    short int numeroPequeno = 32767; //Valor máximo de um short int
    printf("Número pequeno (short int): %d\n", numeroPequeno); //O especificador de formato é %d para short int

    numeroPequeno = 32768; //Atribuindo um valor maior que o máximo de um short int
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    printf ("\n*** Tamanho das variáveis ***\n");
    printf("Short int %lu B: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long int));
    printf("Float: %lu B - double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));
    
}