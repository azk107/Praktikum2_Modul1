#include <stdio.h>
#include <math.h>
int main ()
{
    int A, B, C, Keliling, Luas;
    A = 12;
    C = 5;
    printf("Diketahui: \n");
    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n\n\n", A);

    printf("Jawab: \n");
    printf("Sisi A = %d cm\n", A);

    B = sqrt((12*12)+(5*5));
    printf("Sisi B = %d cm\n", B);
    printf("Sisi C = %d cm\n", C);
    Keliling = A+B+C;
    printf("Keliling = %d cm\n", Keliling);
    Luas = (C*A)/2;
    printf("Luas = %d", Luas);
}
