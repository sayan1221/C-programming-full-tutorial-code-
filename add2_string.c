#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char s1[100],s2[100],s[200];
int i,j;
printf("enter two string :");
gets(s1);
gets(s2);
for(i=0;s1[i]!='\0';i++){
s[i]=s1[i];
}
s[i]=' ';
i++;
for(j=0;s2[j]!='\0';j++){
s[i]=s2[j];
i++;
}
s[i]='\0';
printf("display ->%s\n",s);
return 0;
}





