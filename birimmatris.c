#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,matris[10][10];
	printf("satir ve sutun sayisi: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	for(j=1;j<=n;j++) {
	if(i==j) {
	matris[i][j]=1; }
	else {
	matris[i][j]=0; } } }
	for(i=1;i<=n;i++) {
	for(j=1;j<=n;j++) {
	printf("%d ",matris[i][j]); }
	printf("\n"); }
	return 0;
}
