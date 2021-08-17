#include <stdio.h> 
int main(){
int a,b,c;
printf("Enter 2 number:");
scanf("%d%d",&a,&b);
c=(a>b)?a:b;
printf("largest number is: %d",c);

return 0;
}