#include<stdio.h>
#include<string.h>
int main()
{
    int c;
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    strrev(b);
    c=strcmp(a,b);
    if(c==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}