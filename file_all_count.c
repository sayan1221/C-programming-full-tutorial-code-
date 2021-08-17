#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char p[100];
char ch;
int s=0,l=0,up=0,lw=0,v=0;
printf("Enter file :");
scanf("%s",&p);
fp=fopen(p,"r");
while(1){
ch=fgetc(fp);

if(ch==' ')
s++;
else if(ch=='\n')
l++;
else if(ch>='A' && ch<='Z')
up++;
else if(ch>='a' && ch<='z')
lw++;
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
v++;
printf("%c",ch);
if(ch==EOF)
break;
}
printf("space : %d \n",s);
printf("line : %d \n",l);
printf("upper : %d\n",up);
printf("lower : %d \n",lw);
printf("vowel : %d \n",v);

fclose(fp);
return 0;
}


