#include<stdio.h>

int main()
{
 int n;
 scanf("%d ",&n);
 int n1=10,n2=5;
 for(int i=1;i<=n;i++){
     if(i%2==0){
         printf("%d ",n2);
         n2+=10;
     }
     else{
         printf("%d ",n1);
         n1+=50;
     }
 }
 
}
