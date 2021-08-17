#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,n,s=0,i;
printf("Enter size:");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
printf("Enter Value:\n");
for(i=0;i<n;i++){
scanf("%d",(p+i));
}
printf("Display list:\n");
for(i=0;i<n;i++){
s=s+*(p+i);
printf("%d\t%d\t%d\n",i,(p+i),*(p+i));
}
printf("\nSum of List:-%d\n",s);
free(p);
return 0;
}


