#include<stdio.h>
int main()
{
    int wei,adult,child,n;
    scanf("%d",&wei);
    scanf("%d",&adult);
    scanf("%d",&child);
    adult=adult*75;
    child=child*30;
    n=adult+child;
    if(n<wei)
    printf("Boat is stable");
    else
    printf("Boat will drown");
    return 0;
}
