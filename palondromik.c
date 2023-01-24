#include <stdio.h>
#include <stdlib.h>
int main() { 
    int sayi,i=0,r,n;
    printf("sayiyi girin:");
    scanf("%d",&sayi);
    n=sayi;
    while(sayi!=0)
    { r=sayi%10;
      i=i*10+r;
      sayi/=10; }
	  if(n==i) { printf("sayi palondromiktir"); }
      else { printf("sayi palondromik degildir"); }    
	return 0;
}
