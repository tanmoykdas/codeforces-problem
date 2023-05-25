#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++){
        c=a%10;
        if(c!=0){
            a=a-1;
        }
        else if(c==0){
            a=a/10;
        }
    }
    printf("%d",a);
}