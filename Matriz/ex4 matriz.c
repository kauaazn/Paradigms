#include <stdio.h>
int main()
    {
        int mat[2][2];
        printf("Digite os valores da matriz: ")
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; i++){
                scanf("%d",&mat[i][j]);

            }
        }
        for(int i = 0; i < 3; i++){
                printf("ELementos = %d ", mat[i][i]);
            }
            print("\n");
    
        return 0;
        

    }


    
