#include <stdio.h>
#include <stdlib.h>

void luas(int r){
    int hasil = 3.15*r*r;
    printf("Luas lingkaran = %d\n", hasil);
}
void keliling(int r){
    int hasil = 2*3.15*r;
    printf("Keliling lingkaran = %d\n", hasil);
}
int main(){
   int jari_jari;

    printf("Masukan jari-jari lingkaran: ");
    scanf("%d", &jari_jari);

    luas(jari_jari);

    keliling(jari_jari);
return 0;
}
