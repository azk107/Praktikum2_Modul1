#include <stdio.h>
int main()
{
    int a, b, x, y, Total, sisa;
    a = 9;
    b = 5;
    x = 8;
    y = 8;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Veriabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    sisa = (a%b)+(x%y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", sisa);
}
