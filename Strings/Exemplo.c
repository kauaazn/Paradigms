#include <stdio.h>
int main(){
    char str [6] = "Kauan";
    printf("%c", str[0]);

    printf("%c", str[1]);

    str[0] = 'C';
    
    printf("%s",str);
    return 0;
}

//Ultimo caractere vai ser /0, deve-se colocar um tamanho a mais do vetor
//%s le toda a string, %c apenas caracter