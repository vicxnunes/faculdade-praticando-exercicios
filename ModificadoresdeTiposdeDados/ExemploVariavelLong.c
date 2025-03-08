#include <stdio.h> 

int main (){
    int numeroNormal = 2147483647; //Valor máximo de um int
    long long int numeroGrande = 2147483647; 

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %lld\n", numeroGrande); //O especificador de formato é %ld para long int

    numeroGrande = 214783648; //Atribuindo um valor maior que o máximo de um int
    printf("Número grande atualizado (long int): %lld\n", numeroGrande);

    return 0;


}