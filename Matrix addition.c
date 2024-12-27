#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    int col;
    scanf("%d",&col);
    int arr[rows][col];
    for (int i=0;i<rows;i++){
        for(int j=0;j<col;j++)
        scanf("%d ",&arr[i][j]);
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++)
        printf("%d ",arr[i][j]+arr[i][j]);
        printf("\n");
    }
    return 0;
}
