#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    int col;
    scanf("%d",&col);
    int arr[rows][col];
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<col;j++){
        int max=arr[0][j];
        for(int i=0;i<rows;i++)
     {
        if (arr[i][j]>max){
        max=arr[i][j];
    }
     }
    printf("%d",max);
    printf("\n");
        }
    }
    
    
    
    
    
