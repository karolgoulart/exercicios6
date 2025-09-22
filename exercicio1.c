#include <stdio.h>

int tamanho(char* str){
    int contador=0;
    while (str[contador] != '\0'){
        contador++;
    }
    return contador;
}

int main() {
    char minha_palavra[]= "Linguagem";
    int tam= tamanho(minha_palavra);
    
    printf("A palavra tem um total de %d caracteres.\n", tam);
    
    return 0;
}
