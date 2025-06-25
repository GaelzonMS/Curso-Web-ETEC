#include <stdio.h>
#include <string.h>

int main (){
    printf("Hola mundo");
    char cadena [10];

    strcat(cadena, "Nueva cadena");
    int num_cadena = 1;
    
    printf("La cadena N. %i es %c", num_cadena, cadena);
    return 0;
}
