#include <stdio.h>
#include <stdlib.h>
int main() {
	int derece;
	printf("dereceyi girin: ");
	scanf("%d",&derece);
	if(derece<0)
	{ printf("buz halindedir");
	}
	if(derece>0 && derece<100)
	{ printf("sivi halindedir");
	}
	if(derece>=100)
	{ printf("gaz halindedir");
	}
	return 0;
}
