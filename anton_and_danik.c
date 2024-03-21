#include<stdio.h>
int main()
{
    int n,i,j,b=0,c=0;
    scanf("%d",&n);
    char a[n+1];  
    scanf("%s",&a);
    for(j=0;a[j]!=0;j++)
    {
        if(a[j]==65)
        {
            b++;
        }
        else if(a[j]==68)
        {
            c++;
        }
    }
    if(b>c){
        printf("Anton");
    }
    else if(c>b){
        printf("Danik");
    }
    else if(b==c){
        printf("Friendship");
    }
}