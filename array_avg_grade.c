#include<stdio.h>
int main() {
float avg;
int a, b, c, d, e,i, sum=0,n,x[100];
char grade ;
printf("enter size:") ;
scanf("%d",&n);
for (i=0;i<n;i++){
printf("enter 5 no:") ;
scanf("%d",&x[i]);
sum=sum+x[i];
}
avg=(sum/n);
if(avg>=90)
grade='AA';
else if(avg>=80)
grade='E';
else if(avg>=60)
grade='A';
else if(avg>=40)
grade='B';
else 
grade='c';
printf("total marks =%d\t avg=%f\t grade=%c \n", sum, avg, grade) ;
return 0;
} 