#include <stdio.h>
#include <stdlib.h>
void readbandmatrix(int a, int b, int n, int dizi[], int search[]) {
    int i, j, k=0, itemnum=0;
    for(i=-a+1; i<b; i++) {
        search[i+a-1]=itemnum;
    for(j=0; j<n-abs(i);j++) {
        printf("Band Matris[%d][%d]: ",i+a,j+1);
        scanf("%d", &dizi[search [i+a-1]+j]); }
    itemnum= itemnum +(n-abs(i)); } }
int getbandmatrix(int i, int j, int a, int b, int n, int search[]) {
    if(j>i)
        if(j-i <b)
            return(search[a-1+j-i]+i);
        else
            return 0;
    else if(i-j <a)
            return(search [j-i+a-1]+j);
    else
        return 0; }
void main() {
	int dizi[100];
	int search[100];
	int satir=2,sutun=3,n=4;
	readbandmatrix(satir,sutun,n,dizi,search);
	for(int i=0; i<n; i++) {
        for(int j=0; j<n;j++) {
	        printf("%d ",getbandmatrix(i,j,satir,sutun,n,search)); }
	    printf("\n"); }
}
