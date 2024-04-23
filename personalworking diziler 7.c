#include <stdio.h>
// tabanı klavyeden girilen değerlerin yıldıarlazl
int main() {
    int taban,i,j;
   printf("taban değeri: ");
   scanf("%d",&taban);
   
  
   for(i=0; i<=taban; i++)
   {
       for(j=0; j<=i; j++)
       {
          printf("*");
       }
       printf("\n");
   }
   
   
   
    
   

    return 0;
}