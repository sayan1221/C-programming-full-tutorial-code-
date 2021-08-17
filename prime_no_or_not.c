#include <stdio.h>
int main() {
int x,y=0,z=1,i;
printf("Enter value : ");
scanf("%d", &x);
if(x==1){
printf("1 is neither prime nor composite.");

}

else{
for(i=2;i<x;i++){
if(x%i==0)
z=0;
}

if(z==1)
printf("'%d' is prime no.",x);
else
printf("'%d' is not prime no.",x);
}


return 0;
}