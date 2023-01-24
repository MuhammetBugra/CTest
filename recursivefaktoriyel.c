#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int sayi)
{ if(sayi==0)
  return 1;
  return sayi*faktoriyel(sayi-1);
}
int main() {
	int sayi;
	printf("sayi gir:");
	scanf("%d",&sayi);
	int f=faktoriyel(sayi);
	printf("sonuc:%d\n",f);	
	return 0;
}
