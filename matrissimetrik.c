#include <stdio.h>
#include <stdlib.h>
int main() {
	int matris[10][10],i,j,n,a=0;
	printf("satir ve sutun sayisi: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	printf("[%d][%d]: ",i+1,j+1);
	scanf("%d",&matris[i][j]); } }
	for(i=0;i<n;i++) { 
	a=0;
	for(j=0;j<n;j++) {
	if(matris[i][j]==matris[j][i]) {
	a=1; }
	else {
	break; } } }
	if(a==1) {
	printf("simetriktir."); }
	else {
	printf("simetrik degildir."); }
	return 0;
}
