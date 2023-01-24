#include <stdio.h>
#include <stdlib.h>
main() {
 FILE *fp; 
 char c;
 int k,i;
 fp=fopen("a.txt","r+"); 
 if(fp==NULL){printf("dosya hatasi"); exit(1);} 
 fseek(fp,0L,SEEK_END);
 k=ftell(fp);
 for(i=0;i<=k;i++) {
 fseek(fp,i,SEEK_SET);
 c=fgetc(fp);
 if( c>='a' && c<='z' ) {
 fseek(fp,i,SEEK_SET);
 fputc(c-32,fp); } }
fclose(fp); 
system("pause"); 
return 0; 
}
