#include <stdio.h> 
int power (int x,int n){
int p=1,i;
for (i=1;i<=n;i++)
p=p*x;
return p;
}
int cal (int n){
int no ,p ,s=0;
while (n>0){
printf ("enter a digit ");
scanf ("%d",&no);
p=power (10,n-1);
s=s+(no*p);
n--;
}
return s;
}
int main (){
int s,n;
printf ("enter a no:");
scanf("%d",&n);
s=cal(n);
printf ("result =%d\n",s);
return 0;
}