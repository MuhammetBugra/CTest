#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	printf("sayi giriniz: ");
	scanf("%d",&n);
	for(i=0;i<100;i++) {
	if(n>9) {
	n=n-10; 
	printf("X"); }
	if(n<10) {
	break; } }
	for(i=0;i<100;i++) {
	if(n>8) {
	n=n-9; 
	printf("IX"); }
	if(n<9) {
	break; } }
	for(i=0;i<100;i++) {
	if(n>4) {
	n=n-5; 
	printf("V"); }
	if(n<5) {
	break; } }
	for(i=0;i<100;i++) {
	if(n>3) {
	n=n-4; 
	printf("IV"); }
	if(n<4) {
	break; } }
	for(i=0;i<100;i++) {
	if(n>0) {
	n=n-1; 
	printf("I"); }
	if(n<1) {
	break; } }
	return 0;
}
