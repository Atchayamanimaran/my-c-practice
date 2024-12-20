#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int spaces=4,stars=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<spaces;j++){
            printf(" ");
        }
        for(int j=0;j<stars;j++){
            printf("* ");
        }
        spaces--;
        stars+=2;
        printf("\n");
    }
}
