#include<stdio.h>
int main()
{
    int n,i,a;
    float sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+((float)a/(float)n);
    }
    printf("%f",sum);
}