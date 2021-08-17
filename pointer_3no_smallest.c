#include<stdio.h>

int a,b,c,*x,*y,*z;
int main (){
printf("Enter 3 number:");
scanf("%d%d%d",&a,&b,&c);
x=&a;
y=&b;
z=&c;
if(a==b && a==c && b==c){
printf("%d %d %d all are equal",*x,*y,*z);
printf ("\naddress are : ");
printf("\n %d\n %d\n %d ",x,y,z);
}
else{
if(a>b && c>b){
printf("% d is smallest number",*y);
printf ("\n address are :%d ",y);
}
else if (b>a && c>a){
printf("%d is smallest number",*x);
printf ("\n address are :%d",x);
}
else {
printf("%d is smallest number",*z);
printf ("\n address are :%d",z);
}
}
return 0;
}
