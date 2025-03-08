#include <stdio.h>
int main(){
    float numero1 = 10.2;
    int numero2 = 10;

    printf("nummero1 > numero2: %d\n", (int)numero1 > numero2);
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2); //foi feita uma conversão explicita, forçamos a comparação usando int 

//Até aqui foi feita uma conversão implicita 
//printf("nummero1 > numero2: %d\n", numero1 > numero2);
//printf("numero1 == numero2: %d\n", numero1 == numero2); 

}