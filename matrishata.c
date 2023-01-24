#include <stdio.h>
#include <stdlib.h>
int main() {
	int matris[10][10],i,j,n;
	printf("satir ve sutun sayisi: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	printf("[%d][%d]: ",i+1,j+1);
	scanf("%d",&matris[i][j]); } }
	for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	if(matris[i][j]==0) {
	printf("[%d][%d]. bolumde hata vardir.",i+1,j+1); } 
	printf("\n"); } }
	return 0;
}
