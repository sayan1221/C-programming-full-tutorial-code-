#include <stdio.h>
int main() {
int n,ori,rem,r=0;
printf("Enter a three-digit integer: ");
scanf("%d", &n); 
ori=n; 
    while (ori!=0) {
    rem=ori%10; 
    r=r+(rem*rem*rem); 
    ori=ori/10;
    }
if(r==n)
printf("%d is an Armstrong number.",n);
else
printf("%d is not an Armstrong number.", n);
return 0;
}