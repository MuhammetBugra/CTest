#include <stdio.h>
#include <stdlib.h>
int main() {
	int m=1,j,i;
	for(i=1;i<=5;i++) {
	for(j=1;j<=i;j++) {
	printf("%d ",m);
	m++; }
	printf("\n"); }
	printf("\n\n");
	for(i=1;i<=7;i++) { 
	m=i;
	for(j=1;j<=i;j++) {
	printf("%d ",m);
	m--; }
	printf("\n"); }
	return 0;
}
