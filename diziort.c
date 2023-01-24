#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int n,i,sonuc=0;
	int *dizi=malloc(n*sizeof(int));
	printf("sayi: ");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++) {
	dizi[i]=rand();
	if(dizi[i]>0) {
	sonuc+=dizi[i]; }
	printf("%d ",dizi[i]); }
	printf("\n");
	printf("sonuc: %d",sonuc/n);
	return 0;
}
