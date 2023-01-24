#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,hane,toplam;
	hane=0;
	toplam=0;
	printf("sayiyi giriniz:");
	scanf("%d",&n);
	do {
	toplam +=(n%10);
	hane++;
	n=n/10;
	}
	while (n>0);
	printf("rakamlari toplami:%d\nhane:%d",toplam,hane);
	return 0;
}
