#include <stdio.h> 
int sumdigit (int n){
int s=0,r;
while (n>0){
r=n%10;
s=s+r;
n=n/10;
}
return s;
}
int main () { 
int n,ar[100],i; 
printf("Enter size: "); 
scanf("%d",&n); 
for (i=0;i<n;i++){
printf("enter value:");
scanf("%d",&ar[i]);
}
printf ("store list:\n");
for (i=0;i<n;i++)
printf ("%d\t",ar[i]);
for(i=0;i<n;i++){
ar[i]=sumdigit(ar[i]);
}
printf ("sum of digit list :\n");
for(i=0;i<n;i++)
printf ("%d\t",ar[i]);
return 0;
}




    