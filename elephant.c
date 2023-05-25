#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=5){
            n=n-5;
            c++;
        }
        else if(n>=4){
            n=n-4;
            c++;
        }
       else if(n>=3){
            n=n-3;
            c++;
        }
        else if(n>=2){
            n=n-2;
            c++;
        }
        else if(n>=1){
            n=n-1;
            c++;
        }
    }
    printf("%d",c);
}