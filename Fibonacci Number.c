#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,next=0;
    if(n==a|n==b)
    printf("Fibonacci Number");
    else{
        while(next<n){
            next=a+b;
            a=b;
            b=next;
        }
        if(n==next)
        printf("Fibonacci Number");
        else
        printf("Not Fibonacci Number");
        }
}
