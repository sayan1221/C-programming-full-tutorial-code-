#include<stdio.h>
#include<math.h>
int main(){
int a, f=1,i;
printf ("enter a no :") ;
scanf("%d", &a);
for (i=1;i<=a;i++){
f=f*i;
} 
printf ("factorial=%d\n",f) ;
return 0;
} 