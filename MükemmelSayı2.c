#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sayi,i,toplam;
    for(sayi=1;sayi<=10000;sayi++){
    toplam=0;
    for(i=1;i<=sayi/2;i++){
    if(sayi%i==0)
    toplam=toplam+i;
}
    if(toplam==sayi)
    printf("%d\n",sayi);
}
  system("PAUSE");	
  return 0;
}

