#include <stdio.h>
#include <string.h>

int main(){
int i;
char s1[10],s2[10];
printf("Enter 2 string :");
gets(s1);
gets(s2);

strcat(s1,s2);
printf("Final string :%s",s1);


return 0;
}
