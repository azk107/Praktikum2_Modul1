#include <stdio.h>
int main()
{
    int A, B, Hasil1, Hasil2;
    A = 40000;
    B = 35000;
    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    Hasil1 = A-(A*13/100);
    Hasil2 = B-(B*21/100);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", Hasil1);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", Hasil2);
}
