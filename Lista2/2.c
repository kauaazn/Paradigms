#include <math.h>
#include <stdio.h>

int main()
{
    int R = 2, S = 5, T = -1, X = 3, Y = 1, Z = 0;
    int A, B, C, D;

    A = (R >= 5) || (T > Z) && (X - Y + R > 3 * Z);
    B = (T + 3 >= 4) && !(3 * R / 2 < S * 3);
    C = (X == 2) || (Y == 1) && ((Z == 0) || (R > 3)) && (S < 10);
    D = (R != S) || !(R < X) && (4327 * X * S * Z == 0);

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}