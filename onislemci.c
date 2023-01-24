#include <stdio.h>
#include <stdlib.h>
#define puan 0.25
#define max(s1,s2) (s1>s2) ? s1:s2
int main() {
	int turkce;
	printf("turkce neti: ");
	scanf("%d",&turkce);
	float sozelpuan;
	sozelpuan=turkce*puan+50.25;
	printf("puan: %.2f\n",sozelpuan);
	printf("%d",max(5,10));
	return 0;
}
