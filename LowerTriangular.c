#include <stdio.h>
#include <stdlib.h>
void readtriangularmatrix(int alt[], int n) {
    int i, j, k=0;
    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
        	printf("Alt Ucgen Matris[%d][%d] -- Ust Ucgen Matris[%d][%d]: ",i+1,j+1,i+1,n-i+j);
            scanf("%d", &alt[++k]);
} } }
void getlowertriangularmatrix(int alt[], int n) {
    int i, j, k=0, m;
    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
        	printf("%d ",alt[++k]); }
        for(m=n;m>j;m--) {
        	printf("0 "); }
	    printf("\n"); } }
void getuppertriangularmatrix(int alt[], int n) {
    int i, j, k=0, m;
    for(i=0; i<n; i++) {
    	for(m=0;m<i;m++) {
        	printf("0 "); }
        for(j=0; j<n-i; j++) {
        	printf("%d ",alt[++k]); }
	    printf("\n"); } }
void main() {
	int alt[100];
    int n=4;
    readtriangularmatrix(alt,n);
    printf("\nAlt Ucgen Matris: \n");
    getlowertriangularmatrix(alt,n);
    printf("\nUst Ucgen Matris: \n");
    getuppertriangularmatrix(alt,n);
}
