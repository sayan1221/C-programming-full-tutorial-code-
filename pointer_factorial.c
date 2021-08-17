#include<stdio.h>
#include<math.h>
int main (){
int n,f=1,i;
int *x;
printf("Enter a no:");
scanf("%d",&n);
x=&f;
for(i=1;i<=n;i++){
f=f*i;
}
printf("Address=%d\n",x);
printf("factorial=%d",*x);
return 0;
}