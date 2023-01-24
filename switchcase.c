#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi;
	printf("ay numarasi:");
	scanf("%d",&sayi);
	switch(sayi)
	{ 
	  case 1:printf("Ocak"); break;
	  case 2:printf("Subat"); break;
	  case 3:printf("Mart"); break;
	  case 4:printf("Nisan"); break;
	  case 5:printf("Mayis"); break;
	  case 6:printf("Haziran"); break;
	  case 7:printf("Temmuz"); break;
	  case 8:printf("Agustos"); break;
	  case 9:printf("Eylul"); break;
	  case 10:printf("Ekim"); break;
	  case 11:printf("Kasým"); break;
	  case 12:printf("Aralik"); break;
	  default:printf("Hatali sayi girisi");
	}
	return 0;
}
