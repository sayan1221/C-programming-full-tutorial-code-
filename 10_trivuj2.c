#include<stdio.h>
int main(){
int n,j,i;
printf("enter size:");
scanf("%d",&n);
for(i=n;i>=1;i--){
for(j=1;j<=i;j++){
if(i%2==1 && j%2==1)
printf("1");
else if(i%2==0 && j%2==0)
printf("1");
else
printf("0");
}
printf("\n");
}
return 0;
}

   