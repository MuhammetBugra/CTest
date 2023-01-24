#include <stdio.h>
#include <stdlib.h>
int main() {
	int matris[10][10],dizi[10][10],i,j,n;
	printf("satir ve sutun sayisi: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	printf("[%d][%d]: ",i+1,j+1);
	scanf("%d",&matris[i][j]); } }
	for(j=0;j<n;j++) {
	for(i=0;i<n;i++) {
	dizi[0][j]+=matris[i][j]; } }
	for(j=0;j<n;j++) {
	printf("%d ",dizi[0][j]); }
	return 0;
}
