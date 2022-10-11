#include <stdio.h>
int main()
{
    int a, b, c, Keliling, Harga, Biaya;
    a = 4;
    b = 5;
    c = 7;
    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, ", a);
    printf("%d, ", b);
    printf("%d\n", c);

    Keliling = a+b+c;
    printf("Keliling Tanah Pak Dengklek adalah %d\n", Keliling);

    Harga = 85000;
    printf("Harga tanah Per Meter adalah %d\n", Harga);

    Biaya= Harga*Keliling;
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp.%d\n", Biaya);
}
