#include<stdio.h>
int main()
{
    int n,k,w,i,sum=0,a;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        a=k*i;
        sum=sum+a;
    }
    if(sum>n)
    {
        printf("%d",sum-n);
    }
    else
    printf("0");
}