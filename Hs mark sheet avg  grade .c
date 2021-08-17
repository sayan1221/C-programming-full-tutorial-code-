#include<stdio.h>
int main () { 
float pno, tno, b,c,  e,total, n, g, p, avg; 
char grade;
printf("\t H.S mark sheet \n"); 
printf("Bengali = project no: exam no:"); 
scanf("%f%f",&pno,&tno) ; 
b=(pno+tno);
printf ("Bengali total no =%f\n", b) ;
printf("English = project no: exam no:"); 
scanf("%f%f",&pno,&tno) ; 
e=(pno+tno);
printf ("English total no =%f\n", e) ;
printf("Computer = project no: exam no:"); 
scanf("%f%f",&pno,&tno) ; 
c=(pno+tno);
printf ("Computer total no =%f\n", c) ;
printf("Nutrition = project no: exam no:"); 
scanf("%f%f",&pno,&tno) ; 
n=(pno+tno);
printf ("Nutrition total no =%f\n", n) ;
printf("Geography = project no: exam no:"); 
scanf("%f%f",&pno,&tno) ; 
g=(pno+tno);
printf ("Geography total no =%f\n", g) ;
printf("polscience = project no: exam no:"); 
scanf("%f%f",&pno,&tno) ; 
p=(pno+tno);
printf ("polscience total no =%f\n", p) ;
total =(b+e+c+n+g+p);
avg=(total /6.0);
if(avg>=90)
grade='AA';
else if(avg>=80)
grade='E';
else if(avg>=60)
grade='A';
else if(avg>=40)
grade='B';
else 
grade='c';
printf("total marks =%f\t avg=%f\t grade=%c \n",total, avg, grade ) ;



return 0; 
} 