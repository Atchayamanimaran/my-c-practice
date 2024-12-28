#include<stdio.h>
int prime(int n,int help){
    if(n<=1)
     return 0;
    if(help*help>n)
     return 1;
    if(n%help==0)
     return 0;
    return prime (n,help+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    if (prime(n,2))
     printf("%d is a prime number",n);
    else
     printf("%d is Not a prime number",n);
    
    return 0;
}
