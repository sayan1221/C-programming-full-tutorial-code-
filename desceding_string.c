#include<stdio.h>

int main(){
int i,x=0,y,j;
char l[10],s[50],t;
printf("enter a string : ");
gets(s);
for(i=0;s[i]!='\0';i++){
x++;
}
for(i=0;i<x;i++){
for(j=i+1;j<x;j++){
if(s[i]<s[j]){
t=s[i];
s[i]=s[j];
s[j]=t;
}
}
}
// for(i=0;s[i]!='\0';i++){
printf("descding oder of string : %s  ",s);
// }

return 0;
}


