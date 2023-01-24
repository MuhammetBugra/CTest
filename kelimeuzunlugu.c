#include <stdio.h>
#include <stdlib.h>
int f(char dizi[20]) {
	int i=0;
	while(i<=20) {
	if(dizi[i]=='\0') {
	return i;  }
	i+=1; }
	return i;
}
int main() {
	char dizi[20];
	int n;
	printf("kelime: ");
	scanf("%s",&dizi);
	n=f(dizi);
	printf("%d",n);
	return 0;
}
