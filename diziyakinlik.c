#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int a=0,n,i,sayi,fark,dizi[n];
	srand(time(NULL));
	printf("eleman sayisi: ");
	scanf("%d",&n);
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	for(i=0;i<n;i++) {
	dizi[i]=rand()%100+1;
	if(i==0) {
	fark=sayi-dizi[0]; }
	if((sayi-dizi[i])>fark) {
	fark=sayi-dizi[i]; a=i; }
	printf("%d ",dizi[i]); }
	printf("\n");
	printf("fark: %d\nsayi: %d.elemani %d",fark,a,dizi[a]);
	return 0;
}
