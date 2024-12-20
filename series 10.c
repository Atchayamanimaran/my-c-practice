#include<stdio.h>
int main()
{
    int n,mul;
    scanf("%d ",&n);
    int i,j;
    for(i=0,j=1;i<n,j<=n;i++,j++){
        mul=i*j;
        printf("%d ",mul);
    }
    

	return 0;
}
