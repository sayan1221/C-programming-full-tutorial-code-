#include <stdio.h>
#include <string.h>

int main(){
int i,f=0;
char s1[10],s2[10];
printf("Enter 2 string :");
gets(s1);
gets(s2);

for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
if(s1[i]!=s2[i])
f=1;
break ;
}

if (f==0)
printf("string are equle");
else
printf("string are not equle");




return 0;
}
