#include <stdio.h> 
int main() { 
  long long n;
int c=0; 
printf("Enter an integer: "); 
scanf("%lld", &n); 
while (n != 0) {
c=c+1;
 n =n/10;
 }
 printf("Number of digits: %d", c); 
return 0;
}