#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int genno(){
int x,z;
srand(time('\0'));
// printf("%d\n ",rand()%6);
x= rand()%6;
printf("Computer choosen : \n");
if(x==0 || x==1){
printf("ROCK 🕳️ ⛰️\n\n ");
z=1;
}
else if(x==2 || x==4){
printf("PAPER 🗞️ 📜\n\n ");
z=2;
}
else if(x==3 || x==5){
printf("SCISSORS ✂️ ✂️\n\n ");
z=3;
}
return z;
}

int main (){
int c_point=0,p_point=0;
int x,n,y=0,me,i;
char player[100];
printf("Enter your name: ");
gets(player);


for(i=0;i<3;i++){
printf("\n\n CHOOSE : ANY\n");
printf(" press 1: ROCK\n press 2: PAPER \npress 3:SCISSORS \n");
scanf("\n %d",&y);


if(y==1 || y==2 || y==3){


x=genno();

if(x==0||x==1){
if(y==1){
printf("no point");
}
else if(y==2){
printf("your point +1");
p_point++;
}
else {
printf("computer point +1");
c_point++;
}
}


else if(x==2||x==4){
if(y==1){
printf("computer point +1");
c_point++;
}
else if(y==2){
printf("no point");
}
else {
printf("your point +1");
p_point++;
}
}


else {
if(y==1){
printf("your point +1");
p_point++;
}
else if(y==2){
printf("computer's point +1");
c_point++;
}
else {
printf("no point");
}
}
}

else{
printf("This input is invalid");
}
}


printf("\n\n");
if(p_point==c_point)
printf("YOU'R and COMPUTER point are same !!");
else if(p_point>c_point)
printf("YOU ARE WIN 🎉🎉");
else
printf("COMPUTER WIN 🎉🎉");


return 0;
}

    