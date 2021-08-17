#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str1[ ] = "Jerry" ;
char str2[ ] = "Ferry" ;
int i, j, k, l;
i = strcmp ( str1, "Jerry" ) ;
j = strcmp ( str1, str2 ) ;
k = strcmp ( str1, "Jerry boy");
l = strcmp ( str1, "jerry" ) ;
 printf ( "%d\t %d\t %d\t %d\t", i, j, k, l) ; 
}

