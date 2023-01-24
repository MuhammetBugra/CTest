#include <stdio.h>
#include <stdlib.h>
#include<locale.h> 
main() {
setlocale(LC_ALL, "Turkish"); 
 FILE *f;
 int i=0 , k=0,jj,oo;
 int c=0;
 int b=0;
char ch;
 f=fopen("buyukunluyumu.txt" , "r"); 
for(jj=0;jj<=oo;jj++) { 
if(feof(f)){break;}
ch=getc(f);
 if(ch=='\n'){ k++; }
if(ch=='a'){c++;}
 if(ch=='u'){c++;}
 if(ch=='o'){c++;}
 if(ch=='ý'){c++;}
if(ch=='e'){b++;}
 if(ch=='i'){b++;}
 if(ch=='ö'){b++;}
 if(ch=='ü'){b++;} }
printf("Satir= %d , Karakter sayisi=%d\n" , k+1,jj-1-k);
if(c>0 && b>0){ 
 printf("Girdiginiz kelime buyuk unlu uyumuna uymaz."); }
 else { 
 printf("Girdiginiz kelime buyuk unlu uyumuna uyar.");}
system("pause");
 return 0;
 }
