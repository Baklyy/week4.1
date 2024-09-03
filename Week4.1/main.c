#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x,found=0;
    scanf("%d",&x);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (arr[i][j]==x)
            {
                found=1;
                break;
            }
        }
    }
    if (found)
    {
        printf("will take number\n");
    }
    else
        {
            printf("will not take number\n");
    }

    return 0;
}
