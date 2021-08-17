#include <stdio.h>
#include<math.h>
int prime (int n) {
int i ;
for (i=2;i<n; i++) {
if (n %i==0){
return 0;
} 
} 
return 1;
} 
int main () {
int n, f;
printf ("Enter size :") ;
scanf ("%d", &n) ;
f=prime(n) ;
if (f ==1)
printf ("prime no") ;
else 
printf ("not prime no ") ;
return 0;
} 