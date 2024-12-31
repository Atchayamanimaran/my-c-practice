#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    scanf("%s",a);
    char m[10];
    scanf("%s",m);
    strcat(a,m);
    printf("The concatenated string is %s",a);
    return 0;
}
