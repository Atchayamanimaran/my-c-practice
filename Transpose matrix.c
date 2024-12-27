#include<stdio.h>
int main()
{
    int col;
    scanf("%d",&col);
    int arr[col][col];
    for (int i=0;i<col;i++)
    {
        for(int j=0;j<col;j++)
        {
        scanf("%d ",&arr[i][j]);
        }
    }
    for (int i=0;i<col;i++)
    {
        for(int j=0;j<col;j++)
        {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix is:\n");
    for (int i=0;i<col;i++)
    {
        for(int j=0;j<col;j++)
        {
        printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
