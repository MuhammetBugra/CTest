#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int i,n,min,max;
	printf("sayi: ");
	scanf("%d",&n);
	int *dizi=malloc(n*sizeof(int));
	srand(time(NULL));
	for(i=0;i<n;i++) {
	dizi[i]=rand() %10+1;
	printf("%d ",dizi[i]); }
	max=dizi[0]; min=dizi[0];
	for(i=0;i<n;i++) {
	if(dizi[i]>max) { max=dizi[i]; }
	if(dizi[i]<min) { min=dizi[i]; } }
	printf("\n");
	printf("min: %d -- max: %d\n",min,max);
	printf("farki: %d",max-min);
	return 0;
}
