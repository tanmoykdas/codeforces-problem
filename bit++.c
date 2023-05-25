#include<stdio.h>
int main()
{
    int x=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       char a[4];
       scanf("%s",&a);
       if(a[1]=='+'){
        x++;
       }
       else{
        x--;
       }
    }
    printf("%d",x);
}