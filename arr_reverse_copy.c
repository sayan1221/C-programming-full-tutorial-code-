/* Reverse an array*/

#include<stdio.h>
#define MAX 50
void main()
{
     int arr[MAX],n,i,temp;
     printf("Enter size of Array: "); 
     scanf("%d",&n);
     printf("Enter %d elements\n",n);
     for(i=0;i<n;i++){
     	scanf("%d",&arr[i]);
     }
     for(i=0;i<n/2;i++){
      temp=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=temp;
     }
     printf("\nArray after reversing : \n");
     for(i=0;i<n;i++)
     {
     	printf("%d  ",arr[i]);;
     }
}

