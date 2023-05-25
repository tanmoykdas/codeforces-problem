#include<stdio.h>
int main()
{
    int n,a,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        c=0;
        for(j=1;j<=10000;j++)
        {
            if(j%3==0 || j%10==3)
            {
                c=c+0;
            }
            else
            {
                c++;
            }
            if(c==a)
            {
                printf("%d\n",j);
                break;
            }
        }
    }
}