#include<stdio.h>
#include<stdlib.h>
int main(){
int a=10,b=20,c;
int *p,*q,*s;
p=&a;
q=&b;
s=&c;
*s=*p+*q;
printf("%d\t%d\t%d\n",p,q,s);
printf("%d\t%d\t%d\n",*p,*q,*s);
return 0;
}


