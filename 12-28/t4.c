// BC104 最高身高

#include <stdio.h>
int main()
{
    int arr[10][10] = {0};
    int n = 0;
    int m = 0;
    int i = 0;
    scanf("%d %d",&n,&m);
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0];
    for (i = 0; i < n; i++)
    {         
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }

    for (i = 0; i < n; i++)
    {         
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (max == arr[i][j])
            {
                printf("%d %d\n",i+1,j+1);
            }
        }
    }

}