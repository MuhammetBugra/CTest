#include <stdio.h>
#include <stdlib.h>
int linear(int dizi[],int n,int sayi) {
	int i;
	for(i=0;i<n;i++) {
	if(sayi==dizi[i]) 
	return i; }
	return -1;
}
int main() {
	int n,i=0,sayi;
	printf("boyut: ");
	scanf("%d",&n);
	int dizi[n];
	while(i<n) {
	printf("sayi: ");
	scanf("%d",&dizi[i]);
	i++; }
	printf("aranan sayi: ");
	scanf("%d",&sayi);
	int sonuc=linear(dizi,n,sayi);
	if(sonuc==-1) {
	printf("aranan sayi dizide yok."); }
	else {
	printf("aranan sayi dizide var"); }
	return 0;
}

