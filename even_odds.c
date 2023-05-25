#include<stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld",&a,&b);
    if(a%2==0){
        c=a/2;
    }
    else{
        c=(a+1)/2;
    }
    if(b<=c)
    {
        printf("%lld",(2*b)-1);
    }
    else{
        printf("%lld",(b-c)*2);
    }
}
