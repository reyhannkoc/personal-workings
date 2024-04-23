#include <stdio.h>

int main()
{
    
    int satir,sutun,i,j,k,n;
    printf("satir sayisi giriniz: ");
    scanf("%d",&satir);
    printf("sutun sayii giriniz: ");
    scanf("%d",&sutun);
    
    int matris[satir][sutun];
    
    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
        printf("\n matris[%d][%d]--->",i,j ); 
        scanf("%d",&matris[i][j]);
        printf("%d", matris[i][j]);
        }
    }
    
return 0;
}