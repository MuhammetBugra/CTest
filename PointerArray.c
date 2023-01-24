#include <stdio.h>
#include <stdlib.h>
void main() {
	int a=0;
	int dizi[2][3][4];
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			for(int k=0;k<4;k++) {
			    dizi[i][j][k]=a;
				a++; } } }
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			for(int k=0;k<4;k++) {
			    printf("%d ",dizi[i][j][k]); } 
			printf("\n"); }
		printf("\n"); }	
	int (*ptr)[3][4]=dizi; 
	//ptr[0][0][0]=100;
	printf("%d \n",(*ptr[0][0])+1);
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			for(int k=0;k<4;k++) {
			    printf("%d ",ptr[i][j][k]); } 
			printf("\n"); }
		printf("\n"); }
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			for(int k=0;k<4;k++) {
			    printf("%d ",dizi[i][j][k]); } 
			printf("\n"); }
		printf("\n"); }		
}
