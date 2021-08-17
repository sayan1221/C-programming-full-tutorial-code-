#include <stdio.h> 
int main() { 
int n,s=0,r,no; 
printf("Enter an integer: "); 
scanf("%d",&n); 
no=n;
while (n!=0) { 
r=n%10; 
s=s*10+r; 
n=n/10;
 } 
if (no==s)
printf("pallingdroms");
else
printf("not pallingdroms");


return 0; 
} 



