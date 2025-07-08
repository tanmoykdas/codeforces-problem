#include<stdio.h>
int main()
{
    int i=0,j=0;
    char a[1000],b[1000],c[1000];
    scanf("%s",&a);
    scanf("%s",&b);
    for(i=0;a[i]!=0;i++)
    {
            if(a[i]==b[i])
            {
                c[i]=0;
            }
            else{c[i]=1;}
            printf("%d",c[i]);         
        
    }
}