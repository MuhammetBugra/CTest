#include <stdio.h>
#include <stdlib.h>
int main() {
	int r,pi=3,alan,cevre;
	printf("sayiyi girin: ");
	scanf("%d",&r);
	alan=pi*r*r;
	cevre=2*pi*r;
	printf("sonuc: %d - %d",alan,cevre);
	return 0;
}
