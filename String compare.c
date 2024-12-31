#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%s",str);
    char str2[20];
    scanf("%s",str2);
    int result;
    result=strcmp(str,str2);
    if(result==0)
    printf("Strings are same");
    else
    printf("Strings are not same");
    
    
}
    
