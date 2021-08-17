#include<stdio.h>
int main(){
int a,b,c,d;
int x;

printf("1.who is inventor of c?");
printf("\n1.Dennis M. Ritchie \n2.Deenis m. Retchie ");
printf("\n3.Danis M. Retchi  \n4.Deenis n. Ritchie \n");
printf("\n Enter your answer:");
scanf("%d",&a);
// Dennis M. Ritchie 

if(a==1){
printf("\nRight answer");
}
else{
printf("\n Try again, enter right answer");
printf("\n second chance:");
scanf("%d",&a);
if(a==1){
printf("\n Right answer");
}
else{
printf("\n wrong answer");
}
}

printf("\n\n 2.c programing language devolop in:?");
printf("\n1.1962 \n2.1982 ");
printf("\n3.1992 \n4.1972 \n");
printf("Enter your answer:");
scanf("%d",&b);
// 1972
if(b==4){
printf("\n Right answer");
}
else{
printf("\n wrong answer");
}


printf("\n\n3.In c keyword INT size is :?");
printf("\n1.2 byt \n2.2or6 byt ");
printf("\n3.2 or 4 byt \n4.4 byt \n");
printf("\n Enter your answer:");
scanf("%d",&c);
// 2 or 4 byt
if(c==3){
printf("\nRight answer ");
//printf("\n :- 1no for right answer");
}
else{
printf("\n wrong answer");
}


printf("\n\n 4. How many types of loop in c?");
printf("\n1.2 types \n2.4 types ");
printf("\n3.3 types \n4.3 type \n");
printf("\nEnter your answer:");
scanf("%d",&d);
// 3 types
if(d==3){
printf("\nRight answer");
//printf("\n :- 1no for right answer");
}
else{
printf("\n wrong answer");
}




return 0;
}


    