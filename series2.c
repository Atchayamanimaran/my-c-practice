#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d ",&n);
    int first=1,second=2;
    if(n==first){
        printf("%d",first);
        return 0;
    }
    
        printf("%d %d ",first,second);
        int next=0;
        for( int i=1;i<=n-2;i++){
            next=first+second;
            printf("%d ",next);
            first=second;
            second=next;
        
    }
    
    
    return 0;
}
