#include<stdio.h>
void main (){
int x,y;
printf("enter no1 and no2:");
scanf("%d%d",&x,&y);

if(x>y)
printf("no1 is largest number");
else if(y>x)
printf("no2 is largest number");
else 
printf("no1 and no2 are equal");
}