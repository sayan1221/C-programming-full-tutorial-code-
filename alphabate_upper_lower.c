#include<stdio.h>
#include<ctype.h>
char a;
void main (){
printf("Enter an alphabate: ");
scanf("%s",&a); // a=getchar();
if(islower(a))
putchar (toupper(a));
else
putchar (tolower(a));
}