#include <stdio.h>
int asalmi(int sayi)
 { int i; 
   for(i=2;i<sayi;i++)
 { if(sayi%i==0)   
 { return 0; }  } return 0; }
int main() {
	int n;
	printf("sayi:");
	scanf("%d",&n);
	if(asalmi(n)==0)
	{ printf("asal degildir"); }
	else
	{ printf("asaldir"); }
	return 0;
}
