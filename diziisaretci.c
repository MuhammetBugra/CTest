#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int i,n,min,max;
	int *dizi=malloc(n*sizeof(int));
	printf("sayi: ");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++) {
	dizi[i]=rand() %100+1; 
	printf("%d ",dizi[i]); }
	max=dizi[0]; min=dizi[0];
	for(i=0;i<n;i++) {
	if(dizi[i]>max) { max=dizi[i]; }
	if(dizi[i]<min) { min=dizi[i]; } }
	printf("\nmin: %d  minadres: %x",min,&min);
	printf("\nmax: %d  maxadres: %x",max,&max);
	return 0;
}
