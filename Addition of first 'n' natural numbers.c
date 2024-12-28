#include<stdio.h>
int sum(int x)
{
    if (x==0)
    return 0;
    int res=x+sum(x-1);
    return res;
    
}
   int main(){
       int n;
       scanf("%d",&n);
       printf("%d",sum(n));
   } 
    

