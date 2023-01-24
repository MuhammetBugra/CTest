#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,max,dizi[3];
	max=dizi[0];
	printf("sayilar: ");
	for(i=0;i<3;i++) {
	scanf("%d",&dizi[i]); 
	if(dizi[i]>dizi[i-1]) { 
	max=dizi[i]; } }
	printf("max: %d",max);
	return 0;
}
