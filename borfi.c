#include<stdio.h>
int main(){
int i,n,j,k,x;
printf("enter size:");
scanf("%d",&n);
for(i=n;i>=1;i--){
for(j=1;j<=i;j++){
printf(" ");
}
for(j=1;j<=n+1-i;j++){
printf("* ");
}
printf("\n");
}
for(i=2;i<=n;i++){
for(j=1;j<=i;j++){
printf(" ");
}
for(j=1;j<=n+1-i;j++){
printf("* ");
}
printf("\n");
}

return 0;
}


