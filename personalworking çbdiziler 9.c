// verilen dizi elemanlarını listeleyen kod
#include<stdio.h>
int main(){
	int dizi[2][2];
	
	dizi[0][0]=4;
	dizi[0][1]=5;
	dizi[1][0]=6;
	dizi[1][1]=7;
	
	printf("matrisin 0-0 da bulunan elemanı: %d\n",dizi[0][0]);
	printf("matrisin 0-1 de bulunan elemanı: %d\n",dizi[0][1]);
	printf("matrisin 1-0 da bulunan elemanı: %d\n",dizi[1][0]);
    printf("matrisin 1-1 de bulunan elemanı: %d\n",dizi[1][1]);	
	
	
	return 0;
}