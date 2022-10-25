#include<stdio.h>
#include<stdlib.h>

#define BPM_RT 10 //Biaya Pemliharaan Meter Rumah Tangga
#define BPM_U 20 //Biaya Pemeliharaan Meter Usaha
#define BIAYA_ADM 50 //Biaya Administrasi
#define BIAYA_METER_1 50 //Biaya 10 meter kubik pertama adalah Rp 50,-
#define BIAYA_N 10 //Biaya 10+n meter kubik adalah Rp 10,-
#define DENDA_100_KEATAS 20 //Denda pemakaian lebih dari 100 meter kubik adalah 20,-
#define DENDA_LBH10_KRG100 10 //Denda pemakaian lebih dari 10 meter kubik dan tidak lebih dari 100 m

//Zaskia Aulia (2205551036)
//Gusti Agung Ayu Kade Tami Suastuti2205551055)

int main(){
	int golongan, pbi, pbl, bpm, bp, denda, tarif, total, date;
	
	printf("+---------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|                                    ||===================================================||                                      |\n");
    printf("|                                    ||                   Tarif Air Minum                 ||                                      |\n");
    printf("|                                    ||                  Tirta Sewakadarma                ||                                      |\n");
    printf("|                                    ||                    Kota Denpasar                  ||                                      |\n");
    printf("|                                    ||===================================================||                                      |\n");
    printf("|                                                                                                                                 |\n");
    printf("|                       Jl. Ahmad Yani No.98, Dauh Puri Kaja, Kec. Denpasar Utara, Kota Denpasar, Bali 80231                      |\n");
    printf("|                        Facebook : Perumda Tirta Sewakadarma Kota Denpasar|| Instagram : Tirta Sewakadarma                       |\n");
    printf("|                                                    Call center : (0361) 231314                                                  |\n");
    printf("|                                                                                                                                 |\n");
    printf("+-----------------------------------------------------------------------+---------------------------------------------------------|\n");
    printf("|                                                                       |     Catatan :                                           |\n");
    printf("|             -----Biaya Pemeliharaan Meter (BPM) Air-----              |        1. Denda Rp.20 apabila pemakaian diatas 100      |\n");
    printf("+----+-------------------------+---------------------+------------------+          											      |\n");
    printf("| No |          Golongan Pengguna           |        Tarif             	|        2. Denda Rp.10 apabila pemakaian dari 10 - 100	  |\n");
    printf("+----+-------------------------+---------------------+------------------+          											      |\n");
    printf("|  1 |            Rumah Tangga              |        Rp. 10             |        3. Biaya Administrasi dikenakan sebesar Rp.50    |\n");
    printf("|  2 |             Usaha                    |        Rp. 20             |           setiap melakukan pembayaran tagihan air       |\n");
    printf("+----+-------------------------+---------------------+------------------+---------------------------------------------------------+\n");
    
    while(1){
    	printf("||Pilih: ");
	    scanf("%d", &golongan);
		if(golongan != 1 && golongan !=2){
			printf("Maaf input anda salah!\n");
			printf("Silahkan Input kembali (1 / 2) \n");
		}else{
			system("cls || clear");
			break;
		}
	}
	
 	printf("+---------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|                                    ||===================================================||                                      |\n");
    printf("|                                    ||                   Tarif Air Minum                 ||                                      |\n");
    printf("|                                    ||                  Tirta Sewakadarma                ||                                      |\n");
    printf("|                                    ||                    Kota Denpasar                  ||                                      |\n");
    printf("|                                    ||===================================================||                                      |\n");
    printf("|                                                                                                                                 |\n");
    printf("|                       Jl. Ahmad Yani No.98, Dauh Puri Kaja, Kec. Denpasar Utara, Kota Denpasar, Bali 80231                      |\n");
    printf("|                        Facebook : Perumda Tirta Sewakadarma Kota Denpasar|| Instagram : Tirta Sewakadarma                       |\n");
    printf("|                                                    Call center : (0361) 231314                                                  |\n");
    printf("|                                                                                                                                 |\n");
    printf("+-----------------------------------------------------------------------+---------------------------------------------------------|\n");
    
    while(1){
	    printf("||Masukkan besar pemakaian bulan ini dalam m3  :  ");
	    scanf("%d", &pbi);
	    printf("\n||Masukkan besar pemakaian bulan lalu dalam m3 :  ");
	    scanf("%d", &pbl);
	    if(pbi<pbl){
	    	printf("\nMaaf pemakaian bulan ini harus lebih besar dari bulan lalu\n");
		}else{
			//system("cls || clear");
			break; //Break merupakan perintah yang digunakan untuk memaksa sebuah perulangan berhenti sebelum waktunya
		}
	}
    printf("+---------------------------------------------------------------------------------------------------------------------------------+\n");
   	
   	if(golongan == 1){
   		bpm = BPM_RT;
	}else{
	   	bpm = BPM_U;
	}
	
	bp = pbi - pbl;
	
	if(bp<=10){
		tarif = BIAYA_METER_1;
	}else{
		tarif = BIAYA_METER_1 + (BIAYA_N * (bp- 10));
	}
	
	while(1){
		printf("||Masukkan tanggal   : ");
	    scanf("%d", &date);	
	    if(date<1 || date>31){
	    	printf("Tanggal tidak tersedia\n");
		}else{
			//system("cls || clear");
			break;    //Break merupakan perintah yang digunakan untuk memaksa sebuah perulangan berhenti sebelum waktunya
		}
	}
    
    denda = 0;
    if(date>15){
    	if(bp>100 ){
			denda = DENDA_100_KEATAS;
		}else if(bp>10 && bp<=100){
			denda = DENDA_LBH10_KRG100;
		}
	}
	
	total = BIAYA_ADM + bpm + tarif + denda;
	
	printf("+---------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|                                               -----Rincian pembayaran-----                                                      |\n");
    printf("+---------------------+------------------+----------------------+-------------------------+---------------------------------------+\n");
    printf("|         BPM         | Biaya Adminitrasi| Biaya Penggunaan Air |    	Denda 			  |    Total                         |\n");
    printf("+---------------------+------------------+----------------------+-------------------------+---------------------------------------+\n");
    printf("|Rp. %-17d| Rp. %-13d| Rp. %-17d| Rp. %-28d| Rp. %-21d\n\n\n", bpm, BIAYA_ADM, tarif, denda, total);                              
    
    printf("+---------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|                                                                                                                                 |\n");
    printf("|                                  ||===================================================||                                        |\n");
    printf("|                                  ||Terima kasih telah melakukan pembayaran tagihan air||                                        |\n");
    printf("|                                  ||       PDAM Tirta Sewakadarma Kota Denpasar        ||                                        |\n");
    printf("|                                  ||         Semoga hari-hari anda menyenangkan        ||                                        |\n");
    printf("|                                  ||===================================================||                                        |\n");
    printf("|                                                                                                                                 |\n");
    printf("|                                                                                                                                 |\n");
    printf("+---------------------------------------------------------------------------------------------------------------------------------+\n");

return 0;
}

