#include <stdio.h> 

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float. Se retirar o float de 'a' o resultado será 3.00, pois a divisão de inteiros resulta em um número inteiro.

    printf("Quociente: %.2f\n", quociente);
    return 0;
}