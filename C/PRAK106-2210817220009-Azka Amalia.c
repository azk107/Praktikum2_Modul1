#include <stdio.h>
int main()
{
    int a, b, c, hasil1, hasil2, hasil3;
    a = 4;
    b = 8;
    c = 3;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    if (a==b){hasil1=1;}
    else{hasil1=0;}
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", hasil1);
    if (b>c){hasil2=1;}
    else{hasil2=0;}
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", hasil2);
    if (a!=c){hasil3=1;}
    else{hasil3=0;}
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", hasil3);
}
