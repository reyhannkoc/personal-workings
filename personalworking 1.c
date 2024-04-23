/*sinemada ücret hesaplayan program
x=bilet sayısı, y=su sayısı, z=mısır sayısı , t=kola sayısı
*/

#include <stdio.h>
int main(){
int x,y,z,t,tutar;
printf("alınan bilet sayısı: ");
scanf("%d\n",&x);
printf("alınan su sayısı: ");
scanf("%d\n",&y);
printf("alınan mısır sayısı: ");
scanf("%d\n",&z);
printf("alınan kola sayısı:");
scanf("%d\n",&t);

tutar=5*x+1*y+2*z+4*t;
printf("toplam tutar: %d",tutar);
return 0;
}