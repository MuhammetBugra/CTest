#include <stdio.h>
#include <stdlib.h>
int main() {
	int matris[10][10],i,j,n,sonuc;
	printf("satir ve sutun sayisi: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	printf("[%d][%d]: ",i+1,j+1);
	scanf("%d",&matris[i][j]); } }
	for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	if(i==j) {
	sonuc+=matris[i][j]; } } }
	printf("sonuc: %d",sonuc);
	return 0;
}
