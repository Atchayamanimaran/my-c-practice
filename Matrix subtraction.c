#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    int col;
    scanf("%d",&col);
    int arr1[rows][col];
    int arr2[rows][col];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        scanf("%d",&arr1[i][j]);
        
    }
    for(int i=0;i<rows;i++)
    {
         for(int j=0;j<col;j++)
        scanf("%d",&arr2[i][j]);
    }
    printf("The Result is:");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        
        printf("%d ",arr2[i][j]-arr1[i][j]);
        
        
         
        printf("\n");
    }
    return 0;
}
    
