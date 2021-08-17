#include<stdio.h>


int des(int l,int n,int a[]){
int i,j,t;
for (i=l;i<n;i++){
for (j=i+1;j<n;j++){
if(a[i]<a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
return 0;
}

void asc(int l,int n,int a[]){
int i,j,t;
for (i=l;i<n;i++){
for (j=i+1;j<n;j++){
if(a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
}

int main(){
int n,i,j,t,a[100];
printf("enter size:");
scanf("%d",&n);
printf("enter value:");
for (i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Display List:\n");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}

asc(0,(n/2),a);
int l=n/2;
des(l,n,a);
printf("\nDisplay List:\n");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
return 0;
}