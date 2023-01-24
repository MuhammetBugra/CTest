#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi1,sayi2,toplam,fark,carp,bol;
	printf("birinci sayiyi girin: ");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi girin: ");
	scanf("%d",&sayi2);
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carp=sayi1*sayi2;
	bol=sayi1/sayi2;
	printf("toplami: %d\n farki: %d\n carpimi: %d\n bolumu: %d",toplam,fark,carp,bol);
	return 0;
}
	
