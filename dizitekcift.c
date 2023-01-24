#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int f(int dizi[],int n) {
    int i,j,a;
    for (i = 1;i < n;i++) {
	j = i-1;
	while (j >= 0 && dizi[j]%2==0) {
	a = dizi[j + 1];
	dizi[j + 1] = dizi[j];
	dizi[j] = a;
	j--;
	yaz(dizi,n); } }
	return 0;
}
int yaz(int dizi[],int n) {
	int i;
	for (i = 0;i < n;i++) {
	printf("%d ", dizi[i]); }
	printf("\n");
	return 0;
}
int main() {
	int i,n;
	printf("sayi: ");
	scanf("%d",&n);
	int *dizi=malloc(n*sizeof(int));
	srand(time(NULL));
	for(i=0;i<n;i++) {
	dizi[i]=rand() %10+1;
	printf("%d ",dizi[i]); }
	printf("\n");
	f(dizi,n);
	return 0;
}
