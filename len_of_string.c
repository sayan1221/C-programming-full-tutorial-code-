#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i,l=0;
char st[100];
printf("enter 1 text-");
//scanf("%s",&st);
     gets(st);
for(i=0;st[i]!='\0';i++){
l++;
}
    printf("length=%d\n",l);
    return 0;
}

