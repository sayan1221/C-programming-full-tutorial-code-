#include <stdio.h> 
int digit (int n){
int d=0;
while (n>0){
d++;
n=n/10;
} 
return d;
}
int power (int r,int n){
int p=1,i;
for (i=1;i<=n;i++){
p=p*r;
}
return p;
}
int arm(int n){
int d,s=0,p,r;
d=digit(n);
while (n>0){
r=n%10;
p=power(r,d);
s=s+p;
n=n/10;
}
return s;
}
int main (){
int n ,no;
printf("enter a no :");
scanf("%d", &n);

no=arm(n);
if (n==no)
printf ("armstrong no");
else
printf ("not Armstrong no");
return 0;
}



    