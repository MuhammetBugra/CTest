#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,k,j,i;
	int dizi1[10][10],dizi2[10][10],dizi[10][10]={0};
	printf("1.dizinin satir sayisi: \n");
	scanf("%d",&a);
	printf("1.dizinin sutun ve 2.dizinin satir sayisi: \n");
	scanf("%d",&b);
	printf("2.dizinin sutun sayisi: \n");
	scanf("%d",&c);
	printf("1.matris:\n");
	for(i=0;i<a;i++) {
	for(j=0;j<b;j++) {
	printf("[%d][%d]= ", i+1, j+1);
	scanf("%d", &dizi1[i][j]); } }
	printf("2.matris:\n");
	for(i=0;i<b;i++) {
	for(j=0;j<c;j++) {
	printf("[%d][%d]= ", i+1, j+1);
	scanf("%d", &dizi2[i][j]); } }
	printf("sonuc:\n");
	for(i=0;i<a;i++) {
	for(j=0;j<c;j++) {
	for(k=0;k<b;k++) {
	dizi[i][j]+=dizi1[i][k]*dizi2[k][j]; }
	printf("%d ",dizi[i][j]); }
	printf("\n"); }
	return 0;
}
