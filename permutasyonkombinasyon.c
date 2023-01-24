#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int a) {
	int f=1,i;
	for(i=1;i<=a;i++) {
	f=f*i; }
	return f;
}
int main() {
	int n,r,per,kom;
	printf("n degeri: ");
	scanf("%d",&n);
	printf("r degeri: ");
	scanf("%d",&r);
	per=faktoriyel(n)/faktoriyel(n-r);
	kom=faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
	printf("permutasyon: %d\n",per);
	printf("kombinasyon: %d\n",kom);
	return 0;
}
