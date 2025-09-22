#include <stdio.h>

int tamanho(char* str){
    int contador=0;
    while (str[contador] != '\0'){
        contador++;
    }
    return contador;
}

void concatena(char* d, char* o1, char* o2){
    int i;
    int j;
    
    for (i=0; o1[i] != '\0'; i++) {
        d[i]= o1[i];
    }
    for (j=0; o2[j] != '\0'; j++) {
        d[i+j]= o2[j];
    }
    d[i+j]= '\0';
}    

void main (){
    char destino[50];
    char origem1[]= "Ola,";
    char origem2[]="Mundo!";
    
    concatena (destino, origem1, origem2);
    
    printf ("A string concatenada é: \"%s\"\n", destino);
}   
