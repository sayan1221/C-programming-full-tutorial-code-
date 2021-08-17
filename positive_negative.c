#include <stdio.h> 
int main() { 
int n,i, a[100],pos=0,neg=0,zero=0; 
printf("Enter size : "); 
scanf("%d", &n); 
printf("Enter %d number : ",n); 
for(i=0;i<n;i++){
scanf("%d", &a[i]); 
if(a[i]>0)
pos++;
else if (a[i]<0)
neg++;
else 
zero++;
}
printf("positive number = %d\n", pos); 
printf("Negative number = %d\n", neg);
printf("zero number = %d", zero);

return 0; 
} 



