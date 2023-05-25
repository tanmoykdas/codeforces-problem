#include<stdio.h>

int main()
{
    int  j,n,c=1,i=0;
    char a[10],d;
    scanf("%d",&n);
    while(n!=0)
    {
            scanf("%s",&a);
        if(i>=1)
        {
            if(d!=a[0])
            {

                c=c+0;
            }
            else{
                c++;
            }
        }
        d=a[1];
        n--;
        i++;
    }
    printf("%d",c);
}