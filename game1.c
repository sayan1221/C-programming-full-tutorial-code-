// number guessing game 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int guess,n,x=1;
srand(time(0));
n=rand()%100+1;
// printf("%d\n",n);

do{
// printf("genarate random number");
 printf("Guess the number between 1 to 100\n\n");
scanf("%d",&guess);
     if (guess<n){
    printf("\n Guess higher number\n");
    }
    
    else if (guess>n){
    printf("\n Guess lower number\n");
    }
    
    else{
 printf("\n You answer correct %d times \n",x);
    }
    x++;
}while (guess!=n); 

return 0;
}





    
