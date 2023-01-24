#include <stdio.h>
#include <stdlib.h>
int binary(int dizi[],int bas,int son,int sayi) {
	while(son>=bas) {
	int orta=dizi[(bas+son)/2];
	if(orta==sayi) {
	printf("aranan sayi dizide var"); }
	else {
	printf("aranan sayi dizide yok"); }
	if(orta<sayi)
	bas++;
	if(orta>sayi)
	son--; }
	return 0;
}
int main() {
	int n,i,sayi;
	printf("boyut: ");
	scanf("%d",n);
	int dizi[n];
	for(i=0;i<n;i++) {
	printf("sayi:");
	scanf("%d",&dizi[i]); }
	printf("aradiginiz sayi:");
	scanf("%d",&sayi);
	int sonuc=binary(dizi,0,n-1,sayi);
	return 0;
}
