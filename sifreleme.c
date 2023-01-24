#include <stdio.h>
#include <string.h>
void sifrele(char sifre[],int anahtar) {
	unsigned int i;
	for(i=0;i<strlen(sifre);i++) {
	sifre[i]=sifre[i]-anahtar; }
}
void sifrecoz(char sifre[],int anahtar) {
	unsigned int i;
	for(i=0;i<strlen(sifre);i++) {
	sifre[i]=sifre[i]+anahtar; }
}
int main() {
	char sifre[20];
	printf("sifre girin: ");
	scanf("%s",&sifre);
	printf("girdiginiz deger: %s\n",sifre);
	sifrele(sifre,0xFACA);
	printf("sifreli bicimi: %s\n",sifre);
	sifrecoz(sifre,0xFACA);
	printf("cozulmus hali: %s",sifre);
	return 0;
}
