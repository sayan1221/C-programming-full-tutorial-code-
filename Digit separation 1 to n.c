#include <stdio.h>
int fact (int n) {
int i, f=1;
for (i=1;i<=n;i++) 
f=f*i;
return f;
} 
int main () {
int n, i, ft;
float f, sum=0.0;
printf ("Enter size:") ;
scanf("%d", &n) ;
for (i=1;i<=n;i++) {
ft=fact(i) ;
f=i/(float) ft;
if (i%2==0)
sum=sum-f;
else 
sum=sum+f;
} 
printf("sum=%f\n", sum) ;
return 0;
} 