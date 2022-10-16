#include <stdio.h>

void persegi_panjang()
{
    int luas, panjang, lebar, keliling;

    printf("Menghitung Luas dan Keliling Persegi Panjang\n");
    printf("Input Nilai Panjang : ");
    scanf("%d", &panjang);
    printf("Input Nilai Lebar : ");
    scanf("%d", &lebar);

    luas = panjang * lebar;
    keliling = 2*panjang + 2*lebar;

    printf("\nLuas Persegi Panjang = %d\n", luas);
    printf("Keliling Persegi Panjang = %d\n\n", keliling);

}
void main()
{
    persegi_panjang();
}
