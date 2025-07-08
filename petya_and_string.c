#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,d;
    char a[200],b[200];
    scanf("%s",a);
    scanf("%s",b);
    strlwr(a);
    strlwr(b);
    d=strcmp(a,b);
    printf("%d",d);
}