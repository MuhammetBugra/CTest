#include <stdio.h>
#include <stdlib.h>
int main() {
	int satir,sutun,i,j,k,n,max,min,a=0,b=0,c=0,d=0;
	printf("satir sayisi: ");
	scanf("%d",&satir);
	printf("sutun sayisi: ");
	scanf("%d",&sutun);
	int matris [satir][sutun];
	for(i=0;i<satir;i++) {
	for(j=0;j<sutun;j++) {
	printf("\n [%d][%d]-->",i+1,j+1);
	scanf("%d",&matris[i][j]); } }
	for(k=0;k<satir;k++) {
	for(n=0;n<sutun;n++) {
	printf(" %d ",matris[k][n]); } printf("\n"); }
	max=matris[0][0]; 
	min=matris[0][0];
	for(k=0;k<satir;k++) {
	for(n=0;n<sutun;n++) {
	if(matris[k][n]>max) {
	max=matris[k][n]; a=k; b=n; }
	if(matris[k][n]<min) {
	min=matris[k][n]; c=k; d=n; } } }
	printf("max: %d -- adresi: [%d][%d]\n",max,a+1,b+1);
	printf("min: %d -- adresi: [%d][%d]\n",min,c+1,d+1);
	return 0;
}
