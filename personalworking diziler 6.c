#include <stdio.h>
// eni ve boyu klavyeden girilen değerlerin yıldızlara şekli
int main() {
    int en, boy, i ,j;
    printf("En değeri: ");
    scanf("%d",&en);
    printf("Boy değeri: ");
    scanf("%d",&boy);
    
    for(i=0; i<boy; i++)
    {
        for(j=0; j<=en; j++)
        {
        printf("*");
        }
        printf("\n");
        
    }
    
   

    return 0;
}