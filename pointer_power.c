#include<stdio.h> 
#include<math.h> 
int main(){ 
int p=1,*a,x, y, i; 
printf ("enter tha value of x and y :") ; 
scanf("%d%d", &x, &y); 
a=&p;
for (i=1;i<=y;i++){
p=p*x;
}
printf ("address=%d\n",a) ; 
printf ("power=%d\n",*a) ; 
return 0; 
} 