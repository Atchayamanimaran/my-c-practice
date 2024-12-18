#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int tot=b+d;
    int tot_dop=a+c+(tot/100);
    tot=tot%100;
    printf("%d\n",tot_dop);
    printf("%d",tot);
   
    return 0;
}
