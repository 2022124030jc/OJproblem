#include <stdio.h>

int main()
{
    int a[50],b[50];
    int n,i,j,k;

    while(scanf("%d",&n) != EOF)
    {
        for(i = 0;i<n;i++)
        {
            if(i == 0)
            {
                a[0] = 1;
                printf("1\n");
            }
            else if(i == 1)
            {
                a[1] = 1;
                printf("1 1\n");
            }
            else
            {
                j = i-1;
                for(k = 0;k<j;k++)
                {
                    b[k] = a[k] + a[k+1];
                }
                printf("1");
                for(k = 0;k<j;k++)
                {
                    printf(" %d",b[k]);
                }
                printf(" 1\n");

                for(k = 0;k<j;k++)
                {
                    a[k+1] = b[k];
                }
                a[i] = 1;
            }
        }
        putchar('\n');
    }

    return 0;
}