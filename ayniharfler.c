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
	int a=0,b=0,i,n;
	char kelime,dizi[50];
	printf("kelime: ");
	scanf("%s",&dizi);
	n=f(dizi);
	for(i=0;i<n;i++) {
	if(dizi[i]==dizi[i+1]) {
	b++;
	printf("\n %c%c harfleri yan yana yazilmis",dizi[i],dizi[i+1]); } }
	printf("\n sonuc olarak ayni harflerin toplam yanyana gelme sayisi: %d",b);
	return 0;
}
