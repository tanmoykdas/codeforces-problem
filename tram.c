#include<stdio.h>
int main()
{
    int n,i,a,b,s=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        
        s=s+(b-a);
        if(s>d){
            d=s;
        }
        
       
    }
    printf("%d",d);
}