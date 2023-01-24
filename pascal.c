#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a,j,k;
	printf("satir sayisi: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	a=1;
	for(j=0;j<n-i;j++) {
	printf(" "); }
	for(k=0;k<=i;k++) {
	printf(" %d ",a);
	a=a*(i-k)/(k+1); }
	printf("\n"); }
	return 0;
}
