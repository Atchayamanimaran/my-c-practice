#include<stdio.h>
int main()
{
    int  a,b;
    scanf("%d\n%d",&a,&b);
    int sum=0;
    while(a<=b)
    {
        sum+=a;
        a++;
    }
    printf("%d",sum);
    
}
