#include<stdio.h>
int main() {
int a[10][10],t[10][10];
int r,c,j,i;
printf ("enter row and column:");
scanf ("%d%d",&r,&c);
printf("\n Enter the value at 1st matrix:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
t[i][j]=a[j][i];
}
}
//printf("\n display input matrix:\n");
//for(i=0;i<r;i++){
//for(j=0;j<c;j++){
//printf("%d\t",a[i][j]);
//}
//printf("\n");
//}
printf("\n display output matrix:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d\t",t[i][j]);
}
printf("\n");
}
return 0;
}


    