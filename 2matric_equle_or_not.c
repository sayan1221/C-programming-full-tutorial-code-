#include<stdio.h>
int main(){
int r,c,i,j,x,first[10][10],second[10][10];
printf("enter row and column size:");
scanf("%d%d",&r,&c );
printf("enter first matric :");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&first[i][j]);
}
// printf("\n");
}

printf("enter second matric :");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&second[i][j]);
}
// printf("\n");
}

for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(first[i][j]!=second[i][j] ){
x=1;
break ;
}
}
}

if(x==1){

printf("all no are not equle");
}

else{
printf("all no are  equle");
}

return 0;
}


    