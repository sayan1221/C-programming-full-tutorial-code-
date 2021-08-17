#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char p[100];
char ch;

printf("Enter file :");
scanf("%s",&p);
fp=fopen(p,"r");
while(1){
ch=fgetc(fp);
printf("%c",ch);
if(ch==EOF)
break;
}
fclose(fp);
return 0;
}


