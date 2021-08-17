#include<stdio.h>
int main (){
int n,x,y,z,*s;
printf("enter 3 digit number: ");
scanf("%d",&n);
s=&z;
x=n%10;
y=n/100;
z=x+y;
printf("total :%d\n",*s);
printf("address :%d",s);
return 0;
}