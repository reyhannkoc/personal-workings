#include <stdio.h>
int main(){
   int i,j,k,l;
   
   for(k=0; k<5; k++)
   {
       for(l=0; l<k; l++)
       {
           printf("*");
       }
       printf("\n");
   }

    for ( i=0; i<5; i++)
   {
    for(j=5; j>i; j--)
    {
        printf("*");
    }
    printf("\n");
   }

    return 0;
}