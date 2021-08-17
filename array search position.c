#include<stdio.h>
int main() {
int a[100], i, n, s=0,g;
printf ("enter size :") ;
scanf("%d", &n) ;
for(i=0;i<n;i++) {
printf ("enter no:") ;
scanf("%d", &a[i]) ;
} 
int c=0,y;
printf("enter search no :");
scanf("%d",&y);

for(i=0;i<n;i++){
if (a[i]==y){
c=1;
break;
}
}
if(c == 1) {
printf("\n%d is found at position %d", y, i + 1);
 } 
else {
 printf("\n%d is not found in the array", y); 
} 
return 0;
 }



