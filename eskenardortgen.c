#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	printf("kenar uzunlugu: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	for(k=n;k>=i;k--) {
	printf(" "); } 
	printf("*");
	for(j=1;j<2*i;j++) {
	printf(" "); }
	printf("*");
	printf("\n"); }
	for(i=1;i<=n;i++) {
	for(k=1;k<=i;k++) {
	printf(" "); } 
	printf("*");
	for(j=2*n;j>=2*i;j--) {
	printf(" "); }
	printf("*");
	printf("\n"); }
	return 0;
}
