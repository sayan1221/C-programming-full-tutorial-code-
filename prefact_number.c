#include<stdio.h>
int main(){
int n,i,sum=0;
printf("Enter size:");
scanf("%d",&n);
for(i=1;i<n;i++){
if(n%i==0){
printf("factor : %d\n",i);
sum=sum+i;
}
}
printf("\n perfact number : %d",sum);
return 0;
}




