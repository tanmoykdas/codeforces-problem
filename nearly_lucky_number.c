#include<stdio.h>
int main()
{
    long long a;
    int b,c=0;
    scanf("%lld",&a);
    while(a!=0){
        b=a%10;
        if(b==4 || b==7){
            c++;
        }
        a=a/10;
    }
    if(c==4 || c==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}