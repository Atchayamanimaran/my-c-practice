#include<stdio.h>
int main()
{
    int rad,len;
    scanf("%d",&rad);
    scanf("%d",&len);
    int a=2*rad;
    if(a<=len)
    printf("circle can be inside a Square");
    else
    printf("circle cannot be inside a Square");
    return 0;
  
  
}
