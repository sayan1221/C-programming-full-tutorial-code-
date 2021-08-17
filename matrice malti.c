#include <stdio.h> 
int main() {
int a[10][10],b[10][10],s[10][10],k,n,t,j,i; 
printf ("Enter order :");
scanf("%d",&n);
printf ("Enter 1st matrice :");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf ("Enter 2nd matrice :");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
t=0;
for(k=0;k<n;k++){
t=t+a[i][k]*b[k][j];
}
s[i][j]=t;
}
}
printf("Display list:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d\t",s[i][j]);
}
printf ("\n");
}
return 0;
}
