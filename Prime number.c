#include<stdio.h>
int main()
{
    int n ,i,num=0;
    scanf("%d",&n);
    if(n==0||n==1)
     num=1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
       {
        num=1;
        break;
    }
    }
    if (num==0)
      printf("Prime");
    else
    printf("Not Prime");
    
    return 0;
}
