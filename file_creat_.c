#include<stdio.h>
#include<stdlib.h>
int main(){
char ch[100],ch1[100],a[100];
FILE *fp;
printf("Enter a file with extension: ");
gets(a);
fp=fopen(a,"w+");
printf("Enter data: ");
gets(ch);
fprintf(fp,"%s",ch);
fclose(fp);

fp=fopen(a,"r");
fgets(ch1,200,fp);
printf("string : %s\n",ch1);
fclose(fp);
return 0;
}
    