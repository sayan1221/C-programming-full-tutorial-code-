// K.M. to meter, centimeter or mm

#include<stdio.h>
int main()
{
  float km;
  int v;
  float ans;

  printf("Enter distance in K.M. : ");
  scanf("%f",&km);
  printf("1 for meter \n2 for centimeter \n3 for mm ");
  printf("\npress any");
  scanf("%d",&v);
  
  if(v==1){
    ans=km*1000;
  }
  if(v==2){
    ans=km*100000;
  }
  if(v==3){
    ans=km*1000000;
  }
 
 printf("Answer : %f",ans);
 return 0;
}

