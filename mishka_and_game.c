#include<stdio.h>
 
int main()
{
    int n,a,b,c1=0,i,c2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            c1++;
        }
        else if(b>a)
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        printf("Mishka\n");  
    }
    else if(c2>c1)
    {
        printf("Chris\n");    
    }
    else
    {
        printf("Friendship is magic!^^");  
    }
}