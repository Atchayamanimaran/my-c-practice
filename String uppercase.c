#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='z'){
            a[i]=a[i]+('A'-'a');
        }
    }
    printf("String in uppercase is %s",a);
    return 0;
}
