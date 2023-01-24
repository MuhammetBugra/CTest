#include <stdio.h>
#include <stdlib.h>
int main() {
	int uzunkenar,kisakenar,alan,cevre;
	printf("uzun kenari girin:");
	scanf("%d",&uzunkenar);
	printf("kisa kenari girin:");
	scanf("%d",&kisakenar);
	alan=uzunkenar*kisakenar;
	cevre=2*(kisakenar+uzunkenar);
	printf("dikdortgenin alani: %d\n dikdortgenin cevresi: %d",alan,cevre);	
	return 0;
}
