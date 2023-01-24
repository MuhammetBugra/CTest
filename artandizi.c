#include <stdio.h>
#include <stdlib.h>
int main() {
	int k=1,i,n=1,j;
	for(i=2;i<=6;i++) {
	n=i;
	for(j=1;j<=5;j++) {
	printf("%d ",n);
	n+=k; } 
	printf("\n");
	k++; }
	return 0;
}
