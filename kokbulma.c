#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,j=0,a,b,c,kok[10];
	printf("ax^2+bx+c\n");
	printf("a degeri: ");
	scanf("%d",&a);
	printf("b degeri: ");
	scanf("%d",&b);
	printf("c degeri: ");
	scanf("%d",&c);
	if((b*b-4*a*c)>0) {
	while(1) {
	if((a*i*i+b*i+c)==0) {
	kok[j]=i; j++; }
	if(j==2) {
	break; }
    i++; }
    printf("kokler: %d %d",kok[0],kok[1]); }
    if((b*b-4*a*c)==0) {
    while(1) {
	if((a*i*i+b*i+c)==0) {
	kok[j]=i; j++; }
	if(j==1) {
	break; }
    i++; }
    printf("kokler: %d",kok[0]); }
	if((b*b-4*a*c)<0) {
	printf("reel kok yoktur."); }
	return 0;
}
