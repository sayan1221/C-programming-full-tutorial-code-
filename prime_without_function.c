#include<stdio.h>
int main(){
int n,x,f=0,y,j;
printf("Enter number:");
scanf("%d",&n);

for(x=2;x<n;x++){
if(n%x==0){
printf("not prime");
f=1;
break ;
}
}
if(f==0)
printf (" prime ");

return 0;
}
    