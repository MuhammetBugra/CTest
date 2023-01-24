#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
	if(n==0)
	return 0; 
	else if(n==1) 
	return 1;
	return fib(n-1)+fib(n-2); 
} 
int main() {
	int sonuc,n;
	printf("sayi: ");
	scanf("%d",&n);
	sonuc=fib(n);
	printf("sonuc: %d",sonuc);
	return 0;
}
