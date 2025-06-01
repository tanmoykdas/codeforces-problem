#include<stdio.h>
int main()
{
 char a[101];
 int b,c,i,j;
 scanf("%s",&a);
 for(i=97;i<=122;i++){
    for(j=0;a[j]!=0;j++){
        if(a[j]==i){
            b++;
            break;
        }
    }
 }
 if(b%2==0){
 printf("CHAT WITH HER!");}
 else{ printf("IGNORE HIM!");}
}