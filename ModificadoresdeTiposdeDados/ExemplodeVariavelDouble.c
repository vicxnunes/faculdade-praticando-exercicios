#include <stdio.h> 

int main (){
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso); //O especificador de formato é %Lf para long double, mas pode variar de acordo com o compilador. No terminal aparece varios 0.

    return 0;

}