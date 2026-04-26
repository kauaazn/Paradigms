#include <stdio.h>

/*
 * Ex 2: Ler 9 digitos e mostrar formatado como numero com ponto e virgula.
 * Exemplo: "987654321" -> "9.876.543,21"
 * Os indices da string vao de 0 a 8.
 * Ponto apos posicao 0, ponto apos posicao 3, virgula apos posicao 6.
 */

int main() {
    char num[10];

    printf("Digite 9 digitos numericos: ");
    scanf("%s", num);

    /* Imprime dígito por dígito inserindo separadores nas posições certas */
    printf("Formatado: %c.%c%c%c.%c%c%c,%c%c\n",
        num[0],
        num[1], num[2], num[3],
        num[4], num[5], num[6],
        num[7], num[8]);

    return 0;
}
