 /* #include <stdio.h>
void main()
{
   int *a,i,j,tmp,n;
 	printf("\n\n Pointer : Sort an array using pointer :\n"); 
	printf("--------------------------------------------\n");	   
   
   printf(" Input the number of elements to store in the array : ");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i+1);
	  scanf("%d",a+i);
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("\n The elements in the array after sorting : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i+1,*(a+i));
	  }         
printf("\n");
} */





#include<stdio.h>
int main() {
int n, i, t,j,*p;
printf ("enter size :") ;
scanf("%d", &n) ;
//p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++) {
printf ("enter value:") ;
scanf("%d", (p+i)) ;
}
for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if (*(p+i)>*(p+j)){
t=*(p+i);
*(p+i)=*(p+j);
*(p+j)=t;
}
}
} 
printf("display list :\n");
for (i=0;i<n;i++){
printf ("%d \t",*(p+i));
}
return 0;
} 
    