#include<stdio.h>
int main()
{
    int n,i,ans=1;
    scanf("%d",&n);
     for(i=1;i<=n;++i)
     ans=ans*i;
     printf("%d",ans);
    return 0;
}
