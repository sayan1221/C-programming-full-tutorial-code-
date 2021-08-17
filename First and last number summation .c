#include<stdio.h>
int main(){
int n, n1,n2,s;
printf ("enter 3 digits no :") ;
scanf("%d", &n);
n1=n%10;
n2=n/100;
s=n1+n2;
printf ("s=%d\t", s) ;
return 0;
} 