#include<stdio.h>
int searchv(int n){
int i,*p;
p=(int*)malloc(n*sizeof(int));
printf("enter %d number :",n);
for(i=0;i<n;i++){
scanf("%d",(p+i));
}
return 0;
}


int display(int n){
int sr,i,x=0,*p;
printf("enter search value :");
scanf("%d",&sr);
for(i=0;i<n;i++){
if(*(p+i)==sr){
x=1;
break;
}
}
if(*(p+i)==sr){
printf("%d is found position ar %d :",sr,i+1);
printf(" \n address : %d",(p+i));
}
else{
printf("%d is not found :",sr);
printf("\n address : %d",(p+i));
}
return 0;
}



int main(){
int n,z;
printf("enter size :");
scanf("%d",&n);
searchv(n);
display(n);

return 0;
}



