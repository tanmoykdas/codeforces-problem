#include<stdio.h>
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c++;
        }
        else
        {
            c=c+0;
        }
    }
    if(c>=1){
        printf("HARD");
    }
    else{
        printf("EASY");
    }
}