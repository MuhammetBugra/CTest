#include <stdio.h>
#include <stdlib.h>
int usalma(int taban,int us) {
	int i,sonuc=1;
	for(i=1;i<=us;i++) {
	sonuc*=taban; }
	return sonuc;
}
int main() {
	int taban,us,sonuc;
	printf("taban: ");
	scanf("%d",&taban);
	printf("us: ");
	scanf("%d",&us);
	sonuc=usalma(taban,us);
	printf("sonuc: %d",sonuc);
	return 0;
}
