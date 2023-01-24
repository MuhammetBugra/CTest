#include <stdio.h>
int ebob(int a, int b) {
	if (b != 0)
    return ebob(b, a % b);
    else
    return a;
}
int ekok(int a, int b) {
    int max;
    max=(a>b) ? a : b;
    while(1) {
    if(max%a==0&&max%b==0) {
    printf("ekok: %d",max);
    break; }
	max++; }
}
int main() {
    int sayi1,sayi2;
    printf("sayi 1:");
    scanf("%d",&sayi1);
    printf("sayi 2:");
    scanf("%d",&sayi2);
    printf("ebob: %d\n",ebob(sayi1,sayi2));
    ekok(sayi1,sayi2);
    return 0;
}
