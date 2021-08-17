#include <stdio.h>
int main() {
float area, rad,pera,pi=3.14;
printf("Enter radius of Circle:") ;
scanf("%f", &rad) ;
area=pi*rad*rad;
pera=2*pi*rad;
printf("Area =%f\n", area) ;
printf("Perimeter=%f\n",pera);
return 0;
} 