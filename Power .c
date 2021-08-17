#include<stdio.h> 
#include<math.h> 
int main(){ 
int p=1,x, y, i; 
printf ("enter tha value of x and y :") ; scanf("%d%d", &x, &y); 
for (i=1;i<=y;i++){
p=p*x;
} 
printf ("power=%d\n",p) ; 
return 0; 
} 