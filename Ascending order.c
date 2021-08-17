#include<stdio.h>
int main() {
int a[100],n, i, t,j;
printf ("enter size :") ;
scanf("%d", &n) ;
for(i=0;i<n;i++) {
printf ("enter value:") ;
scanf("%d", &a[i]) ;
}
for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if (a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
} 
printf("display list :\n");
for (i=0;i<n;i++){
printf ("%d \t",a[i]);
}
return 0;
} 
    