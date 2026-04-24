#include <stdio.h>
int main()
    {
        int l,c;
        printf("Nº de linhas: ");
        scanf("%d",l);
        printf("Nº de coluna: ");
        scanf("%d",c);
        int mat[l][c];
        printf("Digite os valores da matriz: ")
        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; i++){
                scanf("%d",&mat[i][j]);

            }
        }
        for(int i = 0; i < c; i++){
            for(int j = 0; j < l; j++){
                printf("Transposta = %d ", mat[j][i]);
            }
            print("\n");
        }
        return 0;
        

    }


    
