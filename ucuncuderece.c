#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,c,d,q,r,s,t,delta,x1,x2,x3;
	printf("ax^3+bx^2+cx+d\n");
	printf("a degeri: ");
	scanf("%lef",&a);
	printf("b degeri: ");
	scanf("%lf",&b);
	printf("c degeri: ");
	scanf("%lf",&c);
	printf("d degeri: ");
	scanf("%lf",&d);
	q=((3*a*c)-(b*b))/(9*a*a);
	r=((9*a*b*c)-(27*a*a*d)-(2*b*b*b))/(54*a*a*a);
    s=pow((r+pow((q*q*q)+(r*r),1/2)),1/3);
    t=pow((r-pow((q*q*q)+(r*r),1/2)),1/3);
    x1=(s+t)-(b/(3*a));
    x2=((-(s+t)/2)-(b/3*a))+(((pow(-1,1/2)*pow(3,1/2))*(s-t))/2);
    x3=((-(s+t)/2)-(b/3*a))-(((pow(-1,1/2)*pow(3,1/2))*(s-t))/2);
	if(d<0) {
	printf("kok yoktur."); }
	else {
	printf("x1=%lf,x2=%lf,x3=%lf",x1,x2,x3); }
	return 0;
}
