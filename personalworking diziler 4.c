//1 ile 20 arasındaki çift sayıları listeleyen ama 14 ü listelemeyen program (while döngüsü kullan)

#include <stdio.h>
int main() {
    int i;
    i=1;
    while(i<=20)
    {
        if(i%2==0 && i!=14)
        {
            printf(" %d",i);
        }
        i++;
    }
    
    
return 0;
}