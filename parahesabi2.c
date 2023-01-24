#include <stdio.h>
#include <stdlib.h>
int main() {
	int misir,kola,su,bilet,toplam;
	printf("misir adeti:");
	scanf("%d",&misir);
	printf("kola adeti:");
	scanf("%d",&kola);
	printf("su adeti:");
	scanf("%d",&su);
	printf("bilet adeti:");
	scanf("%d",&bilet);
	toplam=misir*2+kola*2+su*1+bilet*8;
	printf("toplam fiyat: %d",toplam);
	return 0;
}
