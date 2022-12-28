/*
    CURSO C Kernighan and Ritchie
    programa flujo de entrada/salida

    cap 1 variables, expresiones, iteraciones y decisiones
    herramientas: getchar, putchar
*/

#include <stdio.h>
//Copia la entrada a la salida

main(){
    int carac;

    carac=getchar();
    while(carac!=EOF){
        putchar(carac);
        carac=getchar();
    }
}