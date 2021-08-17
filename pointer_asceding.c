#include<stdio.h>
int main() {
int n, i, t,j,*p;
printf ("enter size :") ;
scanf("%d", &n) ;
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++) {
printf ("enter value:") ;
scanf("%d",(p+i)) ;
}
for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if (*(p+i)>*(p+j)){
t=*(p+i);
*(p+i)=*(p+j);
*(p+j)=t;
}
}
} 
printf("display list :\n");
for (i=0;i<n;i++){
printf ("%d \t",*(p+i));
}
return 0;
} 
    