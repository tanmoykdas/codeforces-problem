#include<stdio.h>
int main()
{
    char a[101];
    int b,c=0,d=0;
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]<97)
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    if(c<=d)
    {
        for(int i=0;a[i]!=0;i++)
        {
            if(a[i]<97)
            a[i]=a[i]+32;
        }
    } 
    else
    {
        for(int i=0;a[i]!=0;i++)
        {
            if(a[i]>=97)
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
}