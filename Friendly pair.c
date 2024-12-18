#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sum1=0,sum2=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sum2=sum2+i;
           
        }
    }
    if(sum1==a&&sum2==b)
    {
        printf("Friendly Pair");
    }
    else
    {
        printf("Not Friendly Pair");
    }
   
    return 0;
}
