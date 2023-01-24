#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float derece,n,sonuc,sonuc1;
	double sonuc2,sonuc3,sonuc4,sonuc5,sonuc6,sonuc7;
	printf("sayi:");
	scanf("%f",&n);
	sonuc=sqrt(n);
	sonuc1=pow(n,2);
	sonuc2=floor(n);
	sonuc3=ceil(n);
	sonuc4=fabs(n);
	sonuc5=log(n);
	printf("koku: %.2f\nkaresi: %.2f\nalt deger: %.f\nust deger: %.f\nmutlak: %.lf\nlog: %.4lf\n",sonuc,sonuc1,sonuc2,sonuc3,sonuc4,sonuc5);
	printf("derece:");
	scanf("%f",&derece);
	sonuc6=sin(derece);
	sonuc7=cos(derece);
	printf("sin: %lf\ncos: %lf",sonuc6,sonuc7);
	return 0;
}
