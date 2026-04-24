#include <stdio.h>

int main() {
    int codigo;
    float salario, aumento, novoSalario;

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch(codigo) {
        case 1:
            aumento = salario * 0.50;
            printf("Cargo: Escriturario\n");
            break;
        case 2:
            aumento = salario * 0.35;
            printf("Cargo: Secretario\n");
            break;
        case 3:
            aumento = salario * 0.20;
            printf("Cargo: Caixa\n");
            break;
        case 4:
            aumento = salario * 0.10;
            printf("Cargo: Gerente\n");
            break;
        case 5:
            aumento = 0;
            printf("Cargo: Diretor\n");
            break;
        default:
            printf("Codigo invalido!\n");
            return 0;
    }

    novoSalario = salario + aumento;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}