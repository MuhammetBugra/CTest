#include <stdio.h>
#include <stdlib.h>
void dortgen(int kisa,int uzun)
{ int i,j;
  for(i=1;i<=uzun;i++)
{ for(j=1;j<=kisa;j++)
{ if(i==1 || i==uzun || j==1 || j==kisa)
{ printf("*"); }
else 
{ printf(" "); }
} printf("\n");
}
}

int main() {
	int endegeri,boydegeri;
	printf("Degerleri Giriniz: ");
	scanf("%d%d",&endegeri,&boydegeri);
	dortgen(endegeri,boydegeri);	
	return 0;
}
