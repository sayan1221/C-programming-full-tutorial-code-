#include<stdio.h>
int main() {
int a, b;
printf("Enter 2 no :") ;
scanf("%d%d", &a, &b) ;
if(a>b) {
printf("%d is max", a) ;
} 
else{
printf("%d is max", b) ;
} 
return 0;
} 