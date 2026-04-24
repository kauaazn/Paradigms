#include <stdio.h>
#include <string.h>
int main(){
    char a[] = "casa";
    char b[] = "casa";
    char c[] = "carro";
    printf("%d\n", strcmp(a,b));
    printf("%d\n", strcmp(a,c));
    return 0;
}
