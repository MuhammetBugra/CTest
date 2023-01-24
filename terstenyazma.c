#include <stdio.h>
#include <stdlib.h>
main() {
FILE *f , *s;
int i,k;
char ch;
f=fopen("abc.txt" , "r");
s=fopen("abcd.txt" , "w");
fseek(f, 0L , SEEK_END);
k=ftell(f);
for(i=1 ; i<=k ; i++) {
fseek(f,-i,SEEK_END);
ch=getc(f);
fputc(ch , s);
printf("%c" ,ch); }
fclose(f);
fclose(s);
printf("\n");
system("pause");
return 0;
}
