#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    int b;
    b=a;
    if(b>=65&&b<=90)
    printf("Upper");
    else if(b>=97&&b<=122)
    printf("Lower");
    else if(a>=0&&a<=9)
    printf("Number");
    else
    printf("Symbol");
    
}
