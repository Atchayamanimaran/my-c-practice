#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    if(a<sum)
    {
        printf("Abundant Number");
    }
    else
    {
        printf("Not Abundant Number");
    }
    return 0;
}
