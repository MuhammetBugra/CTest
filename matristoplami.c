#include <stdio.h>
#include <stdlib.h>
int main() {
	int m1[2][2]={10,12,15,18};
	int m2[2][2]={10,12,15,18};
	int toplam[2][2];
	int i,j,k,n;
	for(i=0;i<2;i++) {
	for(j=0;j<2;j++) {
	toplam[i][j]=m1[i][j]+m2[i][j]; } }
	for(k=0;k<2;k++) {
	for(n=0;n<2;n++) {
	printf("%d ",toplam[k][n]); } printf("\n"); }
	return 0;
}
