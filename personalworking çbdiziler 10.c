//klavyeden girilen matris elemanlarını yazdıran kod

int main(){
	int dizi[2][2];
	
	printf("matrisin 0-0 da bulunan elemanı: \n");
	scanf("%d",&dizi[0][0]);
	printf("matrisin 0-1 de bulunan elemanı: \n");
	scanf("%d",&dizi[0][1]);
	printf("matrisin 1-0 da bulunan elemanı: \n");
	scanf("%d",&dizi[1][0]);
    printf("matrisin 1-1 de bulunan elemanı: \n");
    scanf("%d",&dizi[1][1]);
	
	printf("matrisin 0-0 da bulunan elemanı: %d\n",dizi[0][0]);
	printf("matrisin 0-1 de bulunan elemanı: %d\n",dizi[0][1]);
	printf("matrisin 1-0 da bulunan elemanı: %d\n",dizi[1][0]);
    printf("matrisin 1-1 de bulunan elemanı: %d\n",dizi[1][1]);	
	return 0;
}