#include <stdio.h>
 int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // o 'a' é convertido para float implicitamnete, isso não é muito bom, pois pode acabar gerando erros ou consequencias indesejadas. Você pode forçar a conversão de um tipo para outro, explicitamente, sabendo o que está fazendo. 

    printf("Resultado: %.2f\n", resultado);
    return 0;
 }