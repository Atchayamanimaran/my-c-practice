#include<stdio.h>
int main()
{
    int num,originalnum,rem,result=0,n=0;
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0)
    {
        originalnum/=10;
        ++n;
    }
    originalnum=num;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        result+=round(pow(rem,n));
        originalnum/=10;
    }
    if(result==num)
    printf("Armstrong Number");
    else
    printf("Not Armstrong Number");
    return 0;
}
