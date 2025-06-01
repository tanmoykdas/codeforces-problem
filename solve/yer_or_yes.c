#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0,j,d;
    char a[4],b[4]={"yes"};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        strlwr(a);
        d=strcmp(a,b);
        if(d==0)
        {printf("YES\n");}
        else
        {printf("NO\n");}
    }
}