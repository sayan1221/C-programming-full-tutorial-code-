#include<stdio.h>
int main() {
int a[100], i, n, s=0;
printf ("enter size :") ;
scanf("%d", &n) ;
for(i=0;i<n;i++) {
printf ("enter no:") ;
scanf("%d", &a[i]) ;
s=s+a[i] ;
}
printf("\n sum =%d",s);
// printf (" sum of number: %d ", s) ;
//  number gulo sum barkorar  
//jonno uproar printf ta. 
printf("\n all number :");
for(i=0;i<n;i++) {
printf(" %d", a[i]) ;
} 
for(i=0;i<n;i++) {
a[i] =a[i] *s;
} 
printf("\n Display list :\n") ;
for(i=0;i<n;i++) {
printf("%d\t", a[i]) ;
} 
return 0;
} 
