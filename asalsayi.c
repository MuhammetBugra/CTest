#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a=0,j,b;
	printf("sayi: ");
	scanf("%d",&n);
	for(i=2;i<n;i++) {
	if(n%i==0) {
	a=1; } }
	if(a==1) {
	printf("sayi asal degildir.\n"); }
	else {
	printf("sayi asaldir.\n"); }
	b=n;
	if(a==1) {
    for(i=2;i<b;i++) {
    if(b%i==0) {
    i=2; b--; } }
	printf("en yakin asal: %d",b); }
	return 0;
}
