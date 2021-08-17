#include<stdio.h>
int main(){
int i;
char st[100],a[100];
printf("Enter a string: ");
gets(st);
for(i=0;st[i]!='\0';i++){
if(st[i]>=65 && st[i]<=90){
a[i]=st[i]+32;
}
else{
a[i]=st[i];
}
}
a[i]='\0';
printf("Lower case: %s",a);

return 0;
}


