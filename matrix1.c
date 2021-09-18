#include<stdio.h>
int main()
{
    int i,j,m,n,a[3][3],b[3][3];
    scanf("%d %d",&m,&n);
    for(i = 0 ; i<m ; i++)
    {
        for(j = 0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    for(i = 0 ; i<m ; i++)
    {
        for(j = 0 ; j<n ; j++)
        {
            scanf("%d",&b[i][j]);
            
        }
    }
    printf("Result :\n");
    for(i = 0 ; i<m ; i++)
    {
        for(j = 0 ; j<n ; j++)
        {
            printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}