#include<stdio.h>
int sum(int n){
    if(n==0)
     return 1;
    int res=n*sum(n-1);
    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<0)
    printf("0");
    else
    printf("%d",sum(n));
}
