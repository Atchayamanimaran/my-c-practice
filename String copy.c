#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]; 
    scanf("%s",str);
    char str2[100];
    strcpy(str2,str);
    printf("The Copied string  is %s.",str);
    
    return 0;
}
