#include<stdio.h>
int prime(int n){
int i;
for(i=2;i<n;i++){
if(n%i==0){
return 0;
}
}
return 1;
}
void cal(int x,int y){
int i,c=0;
printf("prime no are :\n");
for(i=x;i<=y;i++){

if(prime(i)==1 && i!=1){
printf("%d\n",i);
c++;
}
}
printf("total no =%d",c);
}



int main(){
int x,y;
printf("enter 2 no renge:");
scanf("%d%d",&x,&y);
cal(x,y);

return 0;
}


