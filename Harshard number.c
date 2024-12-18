#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,sum=0,dig=0,b;
    while(temp!=0)
    {
        dig=temp%10;
        sum=sum+dig;
        temp=temp/10;
    }
     sum==b;
    if(n%b==0)
    {
        printf("Harshard Number");
    }
    else
    {
        printf("Not Harshard Number");
    }
    return 0;
}
