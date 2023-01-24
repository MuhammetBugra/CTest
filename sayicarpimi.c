#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,a,b,sonuc=0;
	printf("sayilar: ");
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++) {
	sonuc+=a;
	 }
	printf("%d",sonuc);
	return 0;
}
