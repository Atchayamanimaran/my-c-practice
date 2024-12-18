#include<stdio.h>
int main()
{
    int i,n;
    int sum=0,even_sum=0,odd_sum=0,even_count=0,odd_count=0;
    float average1=0,average2=0;
    while(1){
    scanf("%d",&n);
    if(n==-1)
    break;
    if(n%2==0){
    even_sum=even_sum+n;
    even_count++;
    }
    else{
    odd_sum=odd_sum+n;
    odd_count++;
    }
    }
    printf("%d\n",even_sum);
    printf("%d\n",odd_sum);
    average1=even_sum/even_count;
    average2=(float)odd_sum/odd_count;
    printf("%.2f\n",average1);
    printf("%.2f",average2);
    
    return 0;
}
