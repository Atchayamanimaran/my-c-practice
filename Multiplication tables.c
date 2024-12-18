#include<stdio.h>
int main()
{
    int num,range,mul;
    scanf("%d\n%d",&num,&range);
    for(int i=1;i<=range;i++)
    {
        mul=i*num;
        printf("%d * %d= %d\n",num,i,mul);
    }
    return 0;
}
