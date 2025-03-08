#include <stdio.h>

int main(){
    int numeroSinal = 3000000000; //esse valor excede de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);//O especificador de formato é %u para unsigned int

    return 0;


}