#include<stdio.h>
int main()
{
  int i,j,n,c;
  char a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%s",&a);
    for(j=0;a[j]!=0;j++);
      if(j>10){
        printf("%c%d%c\n",a[0],j-2,a[j-1]);
      }
      else
       { printf("%s\n",a);}
  }
}