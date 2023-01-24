#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *dosya;
	char karakter,karakter1[50];
	char veri[20]="bilgisayar ",veri1[20]="muhendisligi ",veri2[20]="bolumu";
	dosya=fopen("C:\\Users\\Lenovo\\Desktop\\Yeni klasör\\BUÐRA\\üniversite\\1.Sýnýf\\Bilgisayar Programlama\\devc++\\Yeni klasör\\dosyaislemi.txt","w");
	putc('a',dosya);
	putc('\n',dosya);
	putc('b',dosya);
	dosya=fopen("C:\\Users\\Lenovo\\Desktop\\Yeni klasör\\BUÐRA\\üniversite\\1.Sýnýf\\Bilgisayar Programlama\\devc++\\Yeni klasör\\dosyaislemi2.txt","r");
	do {
	karakter=getc(dosya);
	printf("%c",karakter); }
	while (karakter!=EOF);
	fclose(dosya);
	dosya=fopen("C:\\Users\\Lenovo\\Desktop\\Yeni klasör\\BUÐRA\\üniversite\\1.Sýnýf\\Bilgisayar Programlama\\devc++\\Yeni klasör\\dosyaislemi3.txt","r");
	fgets(karakter1,15,dosya);
	puts(karakter1);
	fclose(dosya);
	dosya=fopen("C:\\Users\\Lenovo\\Desktop\\Yeni klasör\\BUÐRA\\üniversite\\1.Sýnýf\\Bilgisayar Programlama\\devc++\\Yeni klasör\\dosyaislemi4.txt","w");
	fputs(veri,dosya);
	fputs(veri1,dosya);
	fputs(veri2,dosya);
	return 0;
}
