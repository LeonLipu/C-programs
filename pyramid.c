#include <stdio.h>

int main()
{
        int i,j,k;
        int n=9;
        for (i=n; i>0; i--)
        {
                for (j=0; j<i; j++)
                {
                        printf (" ");
                }
                for (k=n-1; k>=i; k--)
                {
                        printf("%d",n-k);
                        printf(" ");
                }
                printf("\n");
        }

        return 0;
}
