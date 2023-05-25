int main()
{
    int n,k,a[50],i,j,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        if(a[j]>=a[k-1]){
        if(a[j]>0){c++;}}
        else{c=c+0;}
    }
    printf("%d",c);
}